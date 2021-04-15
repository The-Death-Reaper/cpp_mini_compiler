D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*
%option yylineno

%{

    extern "C"
    {
        int yylex(void);
    }

#include <stdio.h>
#include "y.tab.h"
#include <iostream>
#include "node.hpp"
using namespace std;
#define YY_USER_ACTION \
        yylloc.first_line = yylloc.last_line; \
        yylloc.first_column = yylloc.last_column; \
        for(int i = 0; yytext[i] != '\0'; i++) { \
            if(yytext[i] == '\n') { \
                yylloc.last_line++; \
                yylloc.last_column = 0; \
            } \
            else { \
                yylloc.last_column++; \
            } \
        }

void yyerror(const char* error_msg);
void comment();
void count();
int check_type(char* id);
void printcode();
void printcode2();
void printcode3();
extern int scope_count;
extern st test;
extern int flag;
%}

%%
\/\/.*\n    {;}
"/*"([^*]|\*+[^*/])*+\*"/" {;}
"#include"[ ]*"<".*">"\n {printf("%s\n", yytext);}
"#include"[ ]*"\"".*"\"" {printf("%s\n", yytext);}


"break"			                { printcode(); return(BREAK); }
"char"			                { printcode(); yylval.str = strdup(yytext); return(CHAR); }
"const"			                { printcode(); return(CONST); }
"class"			                { printcode(); return(CLASS); }
"continue"		                { printcode(); return(CONTINUE); }
"do"			                { printcode(); return(DO); }
"double"		                { printcode(); yylval.str = strdup(yytext); return(DOUBLE); }
"else"			                { printcode(); return(ELSE); }
"float"			                { printcode(); yylval.str = strdup(yytext); return(FLOAT); }
"for"			                { printcode(); return(FOR); }
"if"			                { printcode(); return(IF); }
"int"			                { printcode(); yylval.str = strdup(yytext); return(INT); }
"return"		                { printcode(); return(RETURN); }
"sizeof"		                { printcode(); return(SIZEOF); }
"void"			                { printcode(); yylval.str = strdup(yytext); return(VOID); }
"while"			                { printcode(); return(WHILE); }
"printf"						{ printcode(); return(T_printf); }
"scanf"							{ printcode(); return(T_scanf); }
"cin"							{ printcode(); return(T_cin); }
"cout"							{ printcode(); return(T_cout); }

{L}({L}|{D})*		            { printcode(); /*yylval.str = strdup(yytext);*/ return(check_type(strdup(yytext))); }

0[xX]{H}+{IS}?		            { printcode(); yylval.str = strdup(yytext); return(CONSTANT); }
0{D}+{IS}?		                { printcode(); yylval.str = strdup(yytext); return(CONSTANT); }
{D}+{IS}?		                { printcode(); yylval.str = strdup(yytext); return(CONSTANT); }
L?'(\\.|[^\\'])+'	            { printcode(); yylval.str = strdup(yytext); return(CONSTANT); }

{D}+{E}{FS}?		   			{ printcode(); yylval.str = strdup(yytext); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	        { printcode(); yylval.str = strdup(yytext); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	        { printcode(); yylval.str = strdup(yytext); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"				{ printcode(); yylval.str = strdup(yytext); return(STRING_LITERAL); }


"++"							{ printcode(); yylval.str = strdup(yytext); return(INC_OP); }
"--"							{ printcode(); yylval.str = strdup(yytext); return(DEC_OP); }
"->"							{ printcode(); yylval.str = strdup(yytext); return(PTR_OP); }
"&&"							{ printcode(); yylval.str = strdup(yytext); return(AND_OP); }
"||"							{ printcode(); yylval.str = strdup(yytext); return(OR_OP); }
"<="							{ printcode(); yylval.str = strdup(yytext); return(LE_OP); }
"<<"							{ printcode(); yylval.str = strdup(yytext); return(O_RD); }
">>"							{ printcode(); yylval.str = strdup(yytext); return(I_RD); }
">="							{ printcode(); yylval.str = strdup(yytext); return(GE_OP); }
"=="							{ printcode(); yylval.str = strdup(yytext); return(EQ_OP); }
"!="							{ printcode(); yylval.str = strdup(yytext); return(NE_OP); }
";"							    { printcode(); yylval.str = strdup(yytext); return(';'); }
("{"|"<%")						{ printcode(); yylval.str = strdup(yytext); return('{'); }
("}"|"%>")						{ printcode(); yylval.str = strdup(yytext); return('}'); }
","								{ printcode(); yylval.str = strdup(yytext); return(','); }
":"								{ printcode(); yylval.str = strdup(yytext); return(':'); }
"="								{ printcode(); yylval.str = strdup(yytext); return('='); }
"("								{ printcode(); yylval.str = strdup(yytext); return('('); }
")"								{ printcode(); yylval.str = strdup(yytext); return(')'); }
("["|"<:")						{ printcode(); yylval.str = strdup(yytext); return('['); }
("]"|":>")						{ printcode(); yylval.str = strdup(yytext); return(']'); }
"."								{ printcode(); yylval.str = strdup(yytext); return('.'); }
"&"								{ printcode(); yylval.str = strdup(yytext); return('&'); }
"!"								{ printcode(); yylval.str = strdup(yytext); return('!'); }
"~"								{ printcode(); yylval.str = strdup(yytext); return('~'); }
"-"								{ printcode(); yylval.str = strdup(yytext); return('-'); }
"+"								{ printcode(); yylval.str = strdup(yytext); return('+'); }
"*"								{ printcode(); yylval.str = strdup(yytext); return('*'); }
"/"								{ printcode(); yylval.str = strdup(yytext); return('/'); }
"%"								{ printcode(); yylval.str = strdup(yytext); return('%'); }
"<"								{ printcode(); yylval.str = strdup(yytext); return('<'); }
">"								{ printcode(); yylval.str = strdup(yytext); return('>'); }
"^"								{ printcode(); yylval.str = strdup(yytext); return('^'); }
"|"								{ printcode(); yylval.str = strdup(yytext); return('|'); }
"?"								{ printcode(); yylval.str = strdup(yytext); return('?'); }
[\n]*       					{ printcode3(); }
[ \t\v\f]*						{ printcode2(); }

.								{ /* ignore bad characters */ }

%%



void printcode3()
{
	printf("\n");
}

void printcode2()
{
    ECHO;
}
void printcode()
{
	ECHO;
}


int check_type(char* id)
{

    if(test.declaration_exists_scope(id, scope_count))
    {
        //flag=0;
        //cout << "\n" <<"Identifier " << id << " already declared previously\n";
        yylval.node = test.get_node(id, scope_count);
    }
    else
    {
        yylval.node = new node(yylloc.first_line, id, "", "", 0, scope_count, yylloc.first_column);
        // test.insert( (yylval.node) );
        // cout<<(yylval.node);
    }
	return(IDENTIFIER);
}