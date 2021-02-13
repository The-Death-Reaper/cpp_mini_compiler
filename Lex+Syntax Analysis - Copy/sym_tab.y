%{
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"
#include <vector>

// #define YYDEBUG 1
using namespace std;
ast test;
// ast test1;
unordered_map <string,int> size_map;
node* type;
const char *s = "Hello, World!";   
int flag=1;
class test123{
	int a;
	public:
	test123(){
		a=5;
	}
	void print_func(){
		cout<<"A is "<<a<<"\n";
	}

};

// int flag = 1;


void yyerror(const char *error_msg);

int counter = 0;
int for_scope = 0;
extern FILE *yyin;
extern FILE *yyout;
extern int yylineno;
int scope_count;
extern "C"
{       
        int yyparse(void);
        int yylex(void);  
        int yywrap()
        {
                return 1;
        }

}

%}

%locations
%union {
	char* str;
	class node* node;
}

%token <str> IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token <str> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <str> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <str> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <str> XOR_ASSIGN OR_ASSIGN TYPE_NAME
%token <str> '+' '-' '*' '/' '%' '<' '>' '&' '^' '|' '=' '{' '}'

%token <str> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <str> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <str> STRUCT UNION ENUM ELLIPSIS

%token <str> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
%nonassoc IFX
%nonassoc ELSE

%type <node> declaration init_declarator type_specifier declaration_specifiers
%type <node> declarator direct_declarator 
%type <str> initializer initializer_list assignment_expression
%type <str> conditional_expression logical_or_expression logical_and_expression 
%type <str> inclusive_or_expression exclusive_or_expression and_expression
%type <str> equality_expression relational_expression shift_expression additive_expression
%type <str> multiplicative_expression unary_expression postfix_expression primary_expression
%type <str> assignment_operator constant_expression
%type <node> init_declarator_list


%start translation_unit
%%

primary_expression
	: IDENTIFIER 
	{
		if(!test.declaration_exists($1,scope_count)){
		flag=0;
		cout<<"\n"<<$1<<" Identifier not declared previously\n";
	}
	$$=$1;
	}
	| CONSTANT {$$=$1;}
	| STRING_LITERAL {$$=$1;}
	| '(' expression ')' {;}
	;

postfix_expression
	: primary_expression {$$ = $1;}
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression INC_OP {vector<string> temp1{$1,$2}; $$ = conversion(temp1);}
	| postfix_expression DEC_OP {vector<string> temp1{$1,$2}; $$ = conversion(temp1);}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression {$$ = $1;}
	| INC_OP unary_expression {vector<string> temp1{$1,$2}; $$ = conversion(temp1);}
	| DEC_OP unary_expression {vector<string> temp1{$1,$2}; $$ = conversion(temp1);}
	| unary_operator unary_expression {;}
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;



multiplicative_expression
	: unary_expression {$$ = $1;}
	| multiplicative_expression '*' unary_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	| multiplicative_expression '/' unary_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	| multiplicative_expression '%' unary_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	;

additive_expression
	: multiplicative_expression {$$ = $1;}
	| additive_expression '+' multiplicative_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	| additive_expression '-' multiplicative_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	;

shift_expression
	: additive_expression {$$ = $1;}
	| shift_expression LEFT_OP additive_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	| shift_expression RIGHT_OP additive_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	;

relational_expression
	: shift_expression {$$ = $1;}
	| relational_expression '<' shift_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	| relational_expression '>' shift_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	| relational_expression LE_OP shift_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	| relational_expression GE_OP shift_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	;

equality_expression
	: relational_expression {$$ = $1;}
	| equality_expression EQ_OP relational_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	| equality_expression NE_OP relational_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	;

and_expression
	: equality_expression {$$ = $1;}
	| and_expression '&' equality_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	;

exclusive_or_expression
	: and_expression {$$ = $1;}
	| exclusive_or_expression '^' and_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	;

inclusive_or_expression
	: exclusive_or_expression {$$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	;

logical_and_expression
	: inclusive_or_expression {$$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	;

logical_or_expression
	: logical_and_expression {$$ = $1;}
	| logical_or_expression OR_OP logical_and_expression {vector<string> temp1{$1,$2,$3}; $$ = conversion(temp1);}
	;

conditional_expression
	: logical_or_expression {$$ = $1;}
	| logical_or_expression '?' expression ':' conditional_expression 
	;

assignment_expression
	: conditional_expression {$$ = $1;}
	| unary_expression assignment_operator assignment_expression
	{
		// cout<<"HERE!\n";
		// cout<<$1<<"\n"<<$3<<"\n";
		if(!test.update_identifier($1,scope_count,$3))
		{
			cout<<"Failure\n";
		}
	}
	;

assignment_operator
	: '=' {$$ = $1;}
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression {$$=$1;}
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: type_specifier { 
					   $1->set_size(size_map[$1->get_type()]); 
					   cout<<"\nOne ONE ONE\n"<<$1;
					   
					   type = $1;
				     }
	| type_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator 
	{
		// if(for_scope)
		// {
		// 	--for_scope;
		// }
	}

	| init_declarator_list ',' init_declarator 
	{
		// if(for_scope)
		// {
		// 	--for_scope;
		// }
	}
	;

init_declarator
	: declarator {
					string temp = $1->get_identifier();
					int temp_size = $1->get_size();

					$1 = new node(*type); 
					
					$1->set_identifier(temp); 
					if(temp_size!=0){
						$1->set_size($1->get_size()*temp_size);
					}
					test.insert(*$1);
				 }
	| declarator '=' initializer {
		string temp = $1->get_identifier();
		$1 = new node(*type);
		$1->set_identifier(temp); 
		$1->set_value($3);
		test.insert(*$1);
		}
	;

type_specifier
	: VOID {$$ = new node(@1.first_line,"",$1,"",0,scope_count, @1.first_column);}
	| CHAR {$$ = new node(@1.first_line,"",$1,"",0,scope_count, @1.first_column);}
	| SHORT {;}
	| INT {$$ = new node(@1.first_line,"",$1,"",0,scope_count, @1.first_column);}
	| LONG {;}
	| FLOAT {$$ = new node(@1.first_line,"",$1,"",0,scope_count, @1.first_column);}
	| DOUBLE {$$ = new node(@1.first_line,"",$1,"",0,scope_count, @1.first_column);}
	| SIGNED {;}
	| UNSIGNED {;}
	| TYPE_NAME {;}
	;


specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;

declarator
	: direct_declarator {$$=$1;}
	;

direct_declarator
	: IDENTIFIER 
		{
		if(test.declaration_exists_scope($1,scope_count)){
		flag=0;
		cout<<"\n"<<$1<<" "<<"Identifier already declared previously\n";
		}
		$$ = new node(@1.first_line,$1,"","",0,scope_count, @1.first_column);}
	| '(' declarator ')' {;}
	| direct_declarator '[' constant_expression ']' {$$ = new node(@1.first_line,$1->get_identifier(),"","",atoi($3),scope_count, @1.first_column);}
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')' {$$ = $1;}
	;

parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	;


initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement

	;



compound_statement
	: '{' {
		// cout<<"OVER JERE\n";
		// cout<<"Value of for scope is "<<for_scope<<"\n";
		if(for_scope){
			for_scope--;
			// cout<<"For scope value is "<<scope_count<<"\n";
		}
		else{
		test.create_map(++scope_count);
		}
		// cout<<"DSIPLY IS \n";
		// test.display();
		// cout<<"SCope count is "<<scope_count<<"\n";
		} 
		temp1
	;

temp1
	: '}' 
	{scope_count--;} 
	| statement_list '}' 
	{scope_count--;}
	| declaration_list '}'
	 {scope_count--;}
	| declaration_list statement_list '}'
	 {scope_count--;}
	| statement_list declaration_list '}'
	 {scope_count--;}
	| statement_list declaration_list statement_list  '}'
	 {scope_count--;}
	| declaration_list statement_list declaration_list  '}'
	 {scope_count--;}
	| declaration_list statement_list declaration_list statement_list'}'
	{scope_count--;}
	;



declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

for_expression_statement
	: ';'
	| expression ';'
	| declaration
	;


selection_statement
	: IF '(' expression ')' statement %prec IFX
	| IF '(' expression ')' statement ELSE statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR {
		++for_scope;
		test.create_map(++scope_count);
		// cout<<"For scope is "<<for_scope<<"\n";
		} temp2
	;

temp2
	: '(' for_expression_statement expression_statement ')' statement
	| '(' for_expression_statement expression_statement expression ')' statement
	;


jump_statement
	: RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition 
	| declaration 
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement 
	| declaration_specifiers declarator compound_statement {
		string temp = $2->get_identifier();
		$2 = new node(*type);
		$2->set_identifier(temp); 
		test.insert(*$2);
	}
	| declarator declaration_list compound_statement 
	| declarator compound_statement
	;

%%

void yyerror(const char *error_msg) {
	printf("error_msg: %s\n", error_msg);
}

#include <stdio.h>
extern char yytext[];
extern int column;
int main(int argc, char *argv[]) {


	scope_count = 0;
    size_map["char"]=1;
	size_map["int"]=4;
	size_map["float"]=4;
	size_map["double"]=8;



	// #if YYDEBUG
	// 	yydebug = 1;
	// #endif





	if (!yyparse() && flag) {
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}
		cout<<"DISPLAY is \n";
	cout << test;
	// test.display();

//	fclose(yyout);
	return 0;
}