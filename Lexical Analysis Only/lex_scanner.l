%{
	#include "lex_scanner.h"
	// int line = 0;
	// #define YYSTYPE char *
	// #define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno;
	// #define YY_USER_ACTION \
    yylloc->first_line = yylloc->last_line; \
    yylloc->first_column = yylloc->last_column; \
    for(int i = 0; yytext[i] != '\0'; i++) { \
        if(yytext[i] == '\n') { \
            yylloc->last_line++; \
            yylloc->last_column = 0; \
        } \
        else { \
            yylloc->last_column++; \
        } \
    }
%}

alpha [A-Za-z_]
digit [0-9]


und [_]
space [ ]
tab [	]
line [\n]
char \'.\'
at [@]
string \"(.^([%d]|[%f]|[%s]|[%c]))\"



%option nounput yylineno
%%
{line}                              {yylineno++; return -1;}
[ \t] 							    {return -1;}
":" 								return T_COLON;
"?" 								return T_QUESTION;
"while" 							return T_WHILE;
"for" 								return T_FOR;
"if" 								return T_IF;
"else" 								return T_ELSE;
"cin" 								return T_CIN;
"cout" 								return T_COUT;
"endl" 								return T_ENDL;
"break" 							return T_BREAK;
"continue" 							return T_CONTINUE;
"int" 								return T_INT;
"float" 							return T_FLOAT;
"char" 							    return T_CHAR;
"void" 								return T_VOID;
"#include" 							return INCLUDE;
"main()" 							return MAIN_FUNC;
{digit}+    						return NUM;
{digit}+\.{digit}+ 					return FLOAT;
{alpha}({alpha}|{digit})* 			return IDENTIFIER;
{alpha}({alpha}|{digit})*"\.h"? 	return HEADER;

"//" 								return SLC;
"/*" 								return MLCS;
"*/" 								return MLCE;

\".*\" 								return STRING;








"<" 								return LT;
">"     							return GT;
"="     							return EQ;
"<="    							return LT_EQ;
">="    							return GT_EQ;
"=="    							return EQ_EQ;
"!="    							return N_EQ;
"+"     							return PLUS;
"-"     							return MINUS;
"*"     							return MULT;
"/"     							return DIV;
"++"    							return INCR;
"--"    							return DECR;
"!"     							return NOT;
"||"    							return OR;
"&&"    							return AND;
{alpha}({alpha}|{digit}|{und})*\[{digit}*\] return ARR;
{alpha}({alpha}|{digit}|{und})*\(({alpha}|{digit}|{und}|{space})*\) return FUNC;
{string} 							return STRING_CONST;
{char} 								return CHAR_CONST;
"\""                                return DQ;
"("                                 return OBO;
")"                                 return OBC;
"{"                                 return CBO;
"}"                                 return CBC;
"#"                                 return HASH;
"printf"|"scanf"                    return PRE_FUNC;

.    								return yytext[0];

%%
