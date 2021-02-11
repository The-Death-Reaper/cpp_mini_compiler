#include <stdio.h>
#include "lex_scanner.h"
extern int yylex();
extern int yylineno;
extern int yylloc;
extern char* yytext;
struct node
{
	char token[100];
    char attr[100];
	struct node *next;
};

struct hash
{
	struct node *head;
	int count;
};

struct hash hashTable[1000];
int eleCount = 1000;

struct node * createNode(char *token, char *attr)
{
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));
	strcpy(newnode->token, token);
	strcpy(newnode->attr, attr);
	newnode->next = NULL;
	return newnode;
}

int hashIndex(char *token)
{
	int hi = 0;
	int l, i;
	for(i = 0; token[i] != '\0'; i++)
	{
		hi = hi + (int)token[i];
	}
	hi = hi%eleCount;
	return hi;
}

void insertToHash(char *token, char *attr)
{
	int flag = 0;
	int hi;
	hi = hashIndex(token);
	struct node *newnode = createNode(token, attr);
	/* head of list for the bucket with index "hashIndex" */
	if (hashTable[hi].head==NULL)
	{
		hashTable[hi].head = newnode;
	    hashTable[hi].count = 1;
	    return;
	}
	struct node *myNode;
    myNode = hashTable[hi].head;
	// while (myNode != NULL)
    // 	{
    //     	if (strcmp(myNode->token, token)==0)
    //     	{
    //         		flag = 1;
    //         		break;
    //     	}
    //     	myNode = myNode->next;
    // 	}
	// if(!flag)
	{
		//adding new node to the list
		newnode->next = (hashTable[hi].head);
		//update the head of the list and no of nodes in the current bucket
		hashTable[hi].head = newnode;
		hashTable[hi].count++;
	}
	return;
}

void display()
{
	struct node *myNode;
	int i,j, k=1;
	printf("-------------------------------------------------------------------");
	printf("\nSNo \t|\tToken \t\t|\tToken Type \t\n");
	printf("-------------------------------------------------------------------\n");
	for (i = 0; i < eleCount; i++)
	{
		if (hashTable[i].count == 0) continue;
		myNode = hashTable[i].head;
		if (!myNode) continue;
		while (myNode != NULL)
		{
			printf("%d\t\t", k++);
			printf("%s\t\t\t", myNode->token);
			printf("%s\t\n", myNode->attr);
			myNode = myNode->next;
		}
	}
   	return;
}

int main()
{
	int scan, slcline=0, mlc=0, mlcline=0, dq=0, dqline=0;
	// yyin = fopen("test6.c","r");
	printf("\n\n");
	scan = yylex();
	while(scan)
	{
        // printf("\nSCAN NO %d\n", scan);
        // printf("\nyylloc NO %d\n", yylloc);
		if(yylineno == slcline)
		{
			scan = yylex();
			continue;
		}
		// if(yylineno!=dqline && dqline!=0)
		// {
		// 	if(dq%2!=0)
		// 		printf("\n******** ERROR!! INCOMPLETE STRING at Line %d ********\n\n", dqline);
		// 	dq=0;
		// }
		if((scan>=103 && scan<=115 && scan!=13) && mlc==0)
		{
			printf("%s\t\t\tKEYWORD\t\t\t\tLine %d %d\n", yytext, yylineno, scan);
			insertToHash(yytext, "KEYWORD");
		}
		if(scan==119 && mlc==0)
		{
			printf("%s\t\t\tIDENTIFIER\t\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "IDENTIFIER");
		}
		if(scan==134)
		{
			printf("%s\t\t\tSingleline Comment\t\tLine %d\n", yytext, yylineno);
			slcline = yylineno;
		}
		if(scan==139 && mlc==0)
		{
			printf("%s\t\t\tMultiline Comment Start\t\tLine %d\n", yytext, yylineno);
			mlcline = yylineno;
			mlc = 1;
		}
		if(scan==140 && mlc==0)
		{
			printf("\n******** ERROR!! UNMATCHED MULTILINE COMMENT END %s at Line %d ********\n\n", yytext, yylineno);
		}
		if(scan==140 && mlc==1)
		{
			mlc = 0;
			printf("%s\t\t\tMultiline Comment End\t\tLine %d\n", yytext, yylineno);
		}
		if((scan>=122 && scan<=137) && mlc==0)
		{
			printf("%s\t\t\tOPERATOR\t\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "OPERATOR");
		}
		if((scan==101 || scan==102 || scan==153 || scan==154 || scan==163|| (scan>=164 && scan<=168)) && mlc==0)
		{
			printf("%s\t\t\tSPECIAL SYMBOL\t\t\tLine %d\n", yytext, yylineno);
			if(scan==163)
			{
				dq++;
				dqline = yylineno;
			}
			insertToHash(yytext, "SPECIAL SYMBOL");
		}
		if(scan==120 && mlc==0)
		{
			printf("%s\tHEADER\t\t\t\tLine %d\n",yytext, yylineno);
		}
		if(scan==116 && mlc==0)
		{
			printf("%s\t\t\tMAIN FUNCTION\t\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "MAIN FUNCTION");
		}
		if((scan==157 || scan==158) && mlc==0)
		{
			printf("%s\t\t\tPRE DEFINED FUNCTION\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "PRE DEFINED FUNCTION");
		}
		// if(scan==59 && mlc==0)
		// {
		// 	printf("%s\t\t\tPRE PROCESSOR DIRECTIVE\t\tLine %d\n", yytext, yylineno);
		// }
		if(scan==117 && mlc==0)
		{
			printf("%s\t\t\tINTEGER CONSTANT\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "INTEGER CONSTANT");
		}
		if(scan==118 && mlc==0)
		{
			printf("%s\t\t\tFLOATING POINT CONSTANT\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "FLOATING POINT CONSTANT");
		}
		// if(scan==62 && mlc==0)
		// {
		// 	printf("%s\t\t\tTYPE SPECIFIER\t\t\tLine %d\n", yytext, yylineno);
		// }
		if(scan==169 && mlc==0)
		{
			printf("%s\t\t\tARRAY\t\t\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "ARRAY");
		}
		if(scan==170 && mlc==0)
		{
			printf("%s\t\t\tUSER DEFINED FUNCTION\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "USER DEFINED FUNCTION");
		}
		// if(scan==71 && mlc==0)
		// {
		// 	printf("\n******** ERROR!! CONSTANT ERROR %s at Line %d ********\n\n", yytext, yylineno);
		// }
		// if(scan==72 && mlc==0)
		// {
		// 	printf("\n******** ERROR!! UNKNOWN TOKEN %s at Line %d ********\n\n", yytext, yylineno);
		// }
		if(scan==173 && mlc==0)
		{
			printf("%s\t\t\tCHARACTER CONSTANT\t\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "CHARACTER CONSTANT");
		}
		if(scan==174 && mlc==0)
		{
			printf("%s\t\t\tSIGNED CONSTANT\t\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "SIGNED CONSTANT");
		}
		if(scan==175 && mlc==0)
		{
			printf("%s\t\t\tSTRING CONSTANT\t\t\tLine %d\n", yytext, yylineno);
			insertToHash(yytext, "STRING CONSTANT");
		}
		scan = yylex();
	}
	if(mlc==1)
		printf("\n******** ERROR!! UNMATCHED COMMENT STARTING at Line %d ********\n\n",mlcline);
	printf("\n");
	printf("\n\t******** SYMBOL TABLE ********\t\t\n");
	display();
        printf("-------------------------------------------------------------------\n\n");
}

int yywrap()
{
	return 1;
}