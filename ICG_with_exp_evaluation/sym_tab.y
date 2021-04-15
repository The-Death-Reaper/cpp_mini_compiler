%{
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"
#include <vector>
#include <typeinfo>

// #define YYDEBUG 1
using namespace std;
st test;
// st test1;
int temp_no = 0;
int label_no = 0;
unordered_map <string,int> size_map;
node* type;
int flag=1;
quple_list test_q;

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



int temp_count = 0;
int label_count = 0;

char* create_temp()
{
	char* new_temp = new char[11];
	sprintf(new_temp, "t_%d", temp_count++);
	return new_temp;
}

char* create_label()
{
	char* new_label = new char[11];
	sprintf(new_label, "L_%d", label_count++);
	return new_label;
}



%}
%define parse.error verbose
%define parse.lac full
%locations
%union {
	char* str;
	char a;
	int b;
	float c;
	class node* node;
}

%token <str> CONSTANT STRING_LITERAL SIZEOF
%token <node> IDENTIFIER 
%token <str> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <str> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <str> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <str> XOR_ASSIGN OR_ASSIGN TYPE_NAME I_RD O_RD
%token <str> '+' '-' '*' '/' '%' '<' '>' '&' '^' '|' '=' '{' '}'

%token <str> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <str> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <str> STRUCT UNION ENUM ELLIPSIS

%token <str> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN T_printf T_scanf T_cin T_cout
%nonassoc IFX
%nonassoc ELSE

%type <node> declaration init_declarator type_specifier declaration_specifiers
%type <node> declarator direct_declarator error
%type <str> initializer initializer_list 
%type <str> conditional_expression logical_or_expression logical_and_expression assignment_expression
%type <str> inclusive_or_expression exclusive_or_expression and_expression
%type <str> equality_expression relational_expression shift_expression additive_expression
%type <str> multiplicative_expression unary_expression postfix_expression

%type <str> primary_expression

%type <str> assignment_operator constant_expression
%type <node> init_declarator_list



%start translation_unit
%%

primary_expression
	: IDENTIFIER 
		{
			if ( !test.declaration_exists( $1->get_identifier(), scope_count ) )
			{
				flag = 0;
				cout << "\n" << "Identifier " << $1->get_identifier() <<" not declared previously\n";
			}
			$$ = strdup($1->get_identifier().c_str());
		}

	| CONSTANT 				
		{ 
			$$ = $1;
		}
	| STRING_LITERAL 		{ $$ = $1;}
	| '(' expression ')' 	{;}
	;

postfix_expression
	: primary_expression 									
		{ 
			$$ = $1;
			// cout << "\nasdasd\n" << type->get_type();

		}
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression INC_OP 							{ vector<string> temp1{$1, $2}; $$ = conversion(temp1); 
	}
	| postfix_expression DEC_OP 							{ vector<string> temp1{$1, $2}; $$ = conversion(temp1); 
	}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression 				
		{ 
			$$ = $1;
		}
	| INC_OP unary_expression 			{ vector<string> temp1{$1, $2}; $$ = conversion(temp1); 
	}
	| DEC_OP unary_expression 			{ vector<string> temp1{$1, $2}; $$ = conversion(temp1); 
	}
	| unary_operator unary_expression 	{;}
	| SIZEOF unary_expression{;}
	| SIZEOF '(' type_name ')'{;}
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
	: unary_expression 									
		{ 
			$$ = $1;
		}
	| multiplicative_expression '*' unary_expression 	
		{ 
			string temp_s(type->get_type());
			string arg1($1);
			string arg2($3);
			int flag_t = 1;
			if(temp_s == "int")
			{
				int a1, a2;
				try { a1 = stoi(arg1); }
				catch(...) 
				{ 
					try
					{
						a1 = stoi(string(test.identifier_value(arg1, scope_count)));
					}
					catch(...)
					{
						flag_t = 0;
						flag = 0;
					} 
				}

				try { a2 = stoi(arg2); }
				catch(...) 
				{
					try
					{
						a2 = stoi(string(test.identifier_value(arg2, scope_count)));
					}
					catch(...)
					{
						flag_t = 0;
						flag = 0;
					}
				}

				int res = a1*a2;
				temp_s = to_string(res); 	
			}
			else if(temp_s == "float")
			{
				float a1, a2;
				try { a1 = stof(arg1); }
				catch(...) 
				{ 
					a1 = stof(string(test.identifier_value(arg1, scope_count))); 
				}

				try { a2 = stof(arg2); }
				catch(...) 
				{ 
					a2 = stof(string(test.identifier_value(arg2, scope_count)));
				}

				float res = a1*a2;
				temp_s = to_string(res); 	
			}
			else
			{
				flag = 0;
			}
			if(flag_t)
			{
				int n = temp_s.length();
				char* temp_c = (char*)malloc(sizeof(char)*(n+1));
				strcpy(temp_c, temp_s.c_str());
				$$ = temp_c;
			}
			else
			{
				cout << "Type Error\n";
				vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);
			}

		}
	| multiplicative_expression '/' unary_expression 	
		{ 
			string temp_s(type->get_type());
			string arg1($1);
			string arg2($3);
			int flag_t = 1;
			if(temp_s == "int")
			{
				int a1, a2;
				try { a1 = stoi(arg1); }
				catch(...) 
				{ 
					try
					{
						a1 = stoi(string(test.identifier_value(arg1, scope_count)));
					}
					catch(...)
					{
						flag_t = 0;
						flag = 0;
					} 
				}

				try { a2 = stoi(arg2); }
				catch(...) 
				{
					try
					{
						a2 = stoi(string(test.identifier_value(arg2, scope_count)));
					}
					catch(...)
					{
						flag_t = 0;
						flag = 0;
					}
				}

				int res = a1/a2;
				temp_s = to_string(res); 	
			}
			else if(temp_s == "float")
			{
				float a1, a2;
				try { a1 = stof(arg1); }
				catch(...) 
				{ 
					a1 = stof(string(test.identifier_value(arg1, scope_count))); 
				}

				try { a2 = stof(arg2); }
				catch(...) 
				{ 
					a2 = stof(string(test.identifier_value(arg2, scope_count)));
				}

				float res = a1/a2;
				temp_s = to_string(res); 	
			}
			else
			{
				flag = 0;
			}
			if(flag_t)
			{
				int n = temp_s.length();
				char* temp_c = (char*)malloc(sizeof(char)*(n+1));
				strcpy(temp_c, temp_s.c_str());
				$$ = temp_c;
			}
			else
			{
				cout << "Type Error\n";
				vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);
			}

		}
	| multiplicative_expression '%' unary_expression
		{ 
			string temp_s(type->get_type());
			string arg1($1);
			string arg2($3);
			int flag_t = 1;
			if(temp_s == "int")
			{
				int a1, a2;
				try { a1 = stoi(arg1); }
				catch(...) 
				{ 
					try
					{
						a1 = stoi(string(test.identifier_value(arg1, scope_count)));
					}
					catch(...)
					{
						flag_t = 0;
						flag = 0;
					} 
				}

				try { a2 = stoi(arg2); }
				catch(...) 
				{
					try
					{
						a2 = stoi(string(test.identifier_value(arg2, scope_count)));
					}
					catch(...)
					{
						flag_t = 0;
						flag = 0;
					}
				}

				int res = a1%a2;
				temp_s = to_string(res); 	
			}
			else if(temp_s == "float")
			{
				float a1, a2;
				try { a1 = stof(arg1); }
				catch(...) 
				{ 
					a1 = stof(string(test.identifier_value(arg1, scope_count))); 
				}

				try { a2 = stof(arg2); }
				catch(...) 
				{ 
					a2 = stof(string(test.identifier_value(arg2, scope_count)));
				}
				float res = (int)a1%(int)a2;
				temp_s = to_string(res); 	
			}
			else
			{
				flag = 0;
			}
			if(flag_t)
			{
				int n = temp_s.length();
				char* temp_c = (char*)malloc(sizeof(char)*(n+1));
				strcpy(temp_c, temp_s.c_str());
				$$ = temp_c;
			}
			else
			{
				cout << "Type Error\n";
				vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);
			}

		}
	;

additive_expression
	: multiplicative_expression 						
		{ 
			$$ = $1;
		}
	| additive_expression '+' multiplicative_expression 
		{ 
			string temp_s(type->get_type());
			string arg1($1);
			string arg2($3);
			int flag_t = 1;
			if(temp_s == "int")
			{
				int a1, a2;
				try { a1 = stoi(arg1); }
				catch(...) 
				{ 
					try
					{
						a1 = stoi(string(test.identifier_value(arg1, scope_count)));
					}
					catch(...)
					{
						flag_t = 0;
						flag = 0;
					} 
				}

				try { a2 = stoi(arg2); }
				catch(...) 
				{
					try
					{
						a2 = stoi(string(test.identifier_value(arg2, scope_count)));
					}
					catch(...)
					{
						flag_t = 0;
						flag = 0;
					}
				}

				int res = a1+a2;
				temp_s = to_string(res); 	
			}
			else if(temp_s == "float")
			{
				float a1, a2;
				try { a1 = stof(arg1); }
				catch(...) 
				{ 
					a1 = stof(string(test.identifier_value(arg1, scope_count))); 
				}

				try { a2 = stof(arg2); }
				catch(...) 
				{ 
					a2 = stof(string(test.identifier_value(arg2, scope_count)));
				}

				float res = a1+a2;
				temp_s = to_string(res); 	
			}
			else
			{
				flag = 0;
			}
			if(flag_t)
			{
				int n = temp_s.length();
				// cout<<"\t"<<n<<"\n";
				char* temp_c = (char*)malloc(sizeof(char)*(n+1));
				strcpy(temp_c, temp_s.c_str());
				$$ = temp_c;
			}
			else
			{
				cout << "Type Error\n";
				vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);
			}

		}
	| additive_expression '-' multiplicative_expression 
		{ 
			string temp_s(type->get_type());
			string arg1($1);
			string arg2($3);
			int flag_t = 1;
			if(temp_s == "int")
			{
				int a1, a2;
				try { a1 = stoi(arg1); }
				catch(...) 
				{ 
					try
					{
						a1 = stoi(string(test.identifier_value(arg1, scope_count)));
					}
					catch(...)
					{
						flag_t = 0;
						flag = 0;
					} 
				}

				try { a2 = stoi(arg2); }
				catch(...) 
				{
					try
					{
						a2 = stoi(string(test.identifier_value(arg2, scope_count)));
					}
					catch(...)
					{
						flag_t = 0;
						flag = 0;
					}
				}
				int res = a1-a2;
				temp_s = to_string(res); 	
			}
			else if(temp_s == "float")
			{
				float a1, a2;
				try { a1 = stof(arg1); }
				catch(...) 
				{ 
					a1 = stof(string(test.identifier_value(arg1, scope_count))); 
				}

				try { a2 = stof(arg2); }
				catch(...) 
				{ 
					a2 = stof(string(test.identifier_value(arg2, scope_count)));
				}

				float res = a1-a2;
				temp_s = to_string(res); 	
			}
			else
			{
				flag = 0;
			}
			if(flag_t)
			{
				int n = temp_s.length();
				char* temp_c = (char*)malloc(sizeof(char)*(n+1));
				strcpy(temp_c, temp_s.c_str());
				$$ = temp_c;
			}
			else
			{
				cout << "Type Error\n";
				vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);
			}

		}
	;

shift_expression
	: additive_expression 								
		{ 
			$$ = $1;
		}
	| shift_expression LEFT_OP additive_expression 		{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	| shift_expression RIGHT_OP additive_expression 	{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	;

relational_expression
	: shift_expression 									
		{ 
			$$ = $1;
		}
	| relational_expression '<' shift_expression 		{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	| relational_expression '>' shift_expression 		{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	| relational_expression LE_OP shift_expression 		{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	| relational_expression GE_OP shift_expression 		{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	;

equality_expression
	: relational_expression 							
		{ 
			$$ = $1;
		}
	| equality_expression EQ_OP relational_expression 	{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	| equality_expression NE_OP relational_expression 	{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	;

and_expression
	: equality_expression 								
		{ 
			$$ = $1;
		}
	| and_expression '&' equality_expression 			{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	;

exclusive_or_expression
	: and_expression 									
		{ 
			$$ = $1;
		}
	| exclusive_or_expression '^' and_expression 		{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	;

inclusive_or_expression
	: exclusive_or_expression 								
		{ 
			$$ = $1;
		}
	| inclusive_or_expression '|' exclusive_or_expression 	{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	;

logical_and_expression
	: inclusive_or_expression 									
		{ 
			$$ = $1;
		}
	| logical_and_expression AND_OP inclusive_or_expression 	{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	;

logical_or_expression
	: logical_and_expression						 		
		{ 
			$$ = $1;
		}
	| logical_or_expression OR_OP logical_and_expression 	{ vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
	}
	;

conditional_expression
	: logical_or_expression 											
		{ 
			$$ = $1;
		}
	| logical_or_expression '?' expression ':' conditional_expression 
	;

assignment_expression
	: conditional_expression 											
		{ 
			$$ = $1;
		}
	| unary_expression assignment_operator assignment_expression
	{
		// cout<<"HERE!\n";
		// cout<<$1<<"\n"<<$3<<"\n";
		if( !test.update_identifier($1, scope_count, $3) )
		{
			cout<<"Failure\n";
		}
		char arg1[10],previous_temp[10];
		// strcpy(previous_temp,get_previous_temp()); 
		quple* new_record = new quple("assignment", "", $3, "", $1, @1.first_line, @1.first_column);
		test_q.insert_quple(new_record);

                            // char arg1[10],previous_temp[10];
                            // strcpy(previous_temp,get_previous_temp()); 
                            // sprintf(arg1,"%s",$3);
    						// quadruple * new_record = create_quadruple("assignment","",arg1,"",$1, yylineno);
                            // insert_quadruple(q_list1,new_record); 
                            // int ex = exists(list2,$1, scope); 
                            // if(ex == 0) {printf("Error in Line %d : Assignment before Declaration\n", yylineno); errors++;}
                            // id_ex = find(list2, $1, scope);
                            // update(list2, $1, scope, $3);
                            // iflag = 0;
                            // cflag = 0;
                            // fflag = 0;


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
	: conditional_expression { $$=$1; }
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: type_specifier 
		{ 
			$1->set_size(size_map[$1->get_type()]); 					   
			type = $1;
			$$ = $1;
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
	: declarator 
		{
			// string temp = $1->get_identifier();
			// int temp_size = $1->get_size();

			// $1 = new node(*type); 
			
			// $1->set_identifier(temp); 
			// $1->set_col_no(@1.first_column);
			// if(temp_size!=0)
			// {
			// 	$1->set_size($1->get_size()*temp_size);
			// }
			// test.insert(*$1);

			int temp_size = $1->get_size();
			// printf("\nSIZE: %d\n", type->get_size());
			if(temp_size!=0)
			{
				$1->set_size(type->get_size()*temp_size);
			}
			else
			{
				// printf("\nSIZE: %d\n", $1->get_size());
				
				$1->set_size(type->get_size());
				// printf("\nSIZE: %d\n", $1->get_size());
				// cout<<*$1;
			}
			// test.insert(*$1);
			$1->set_type( type->get_type() );
			test.insert($1);
		}
	| declarator '=' initializer 
		{
			// string temp = $1->get_identifier();
			// $1 = new node(*type);
			// $1->set_identifier(temp); 
			// $1->set_value($3);
			// $1->set_col_no(@1.first_column);
			// test.insert(*$1);
			$1->set_value($3);
			int temp_size = $1->get_size();
			if( temp_size!=0 )
			{
				$1->set_size( type->get_size() * temp_size );
			}
			else
			{
				$1->set_size( type->get_size() );
			}
			$1->set_type( type->get_type() );
			test.insert($1);



							char arg1[10];
                            sprintf(arg1,"%s",$3);
    						quple* new_record = new quple("assignment","",arg1,"",$1->get_identifier(), @1.first_line, @1.first_column);
                            test_q.insert_quple(new_record); 
		}
	| error
	;

type_specifier
	: VOID 							{ $$ = new node(@1.first_line, "", $1, "", 0, scope_count, @1.first_column); }
	| CHAR 							{ $$ = new node(@1.first_line, "", $1, "", 0, scope_count, @1.first_column); }
	| SHORT 						{;}
	| INT 							{ $$ = new node(@1.first_line, "", $1, "", 0, scope_count, @1.first_column); }
	| LONG 							{;}
	| FLOAT 						{ $$ = new node(@1.first_line, "", $1, "", 0, scope_count, @1.first_column); }
	| DOUBLE 						{ $$ = new node(@1.first_line, "", $1, "", 0, scope_count, @1.first_column); }
	| SIGNED 						{;}
	| UNSIGNED 						{;}
	| TYPE_NAME 					{;}
	;


specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;

declarator
	: direct_declarator 			{ $$=$1; }
	;

direct_declarator
	: IDENTIFIER 										
		{ 	
			if(test.declaration_exists_scope( $1->get_identifier(), scope_count))
			{
				flag=0;
				cout << "\n" <<"Identifier " << $1->get_identifier() << " already declared previously\n";
			}
			$$ = $1; 
		}

	| '(' declarator ')' 								{;}
	| direct_declarator '[' constant_expression ']' 	
	{ 
		int temp = $1->get_size()?$1->get_size():1; 
		// $$ = new node(@1.first_line, $1->get_identifier(), "", "", temp * atoi($3), scope_count, @1.first_column);
		$1->set_size( temp * atoi($3) );
		$$ = $1;
	}
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')' 						{ $$ = $1; }
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
	: compound_statement			{ $<str>$ = $<str>1; }
	| expression_statement			{ $<str>$ = $<str>1; }
	| selection_statement			{ $<str>$ = $<str>1; }
	| iteration_statement			{ $<str>$ = $<str>1; }
	| jump_statement				{ $<str>$ = $<str>1; }
	| print_statement				{ $<str>$ = $<str>1; }
	| scan_statement				{ $<str>$ = $<str>1; }

	;

print_statement
	: T_printf '(' STRING_LITERAL ')'
	| T_printf '(' STRING_LITERAL ',' identifier_list ')'
	| T_cout tempx ';'

tempx
	: O_RD identifier_list
	| O_RD STRING_LITERAL
	| tempx O_RD identifier_list
	| tempx O_RD STRING_LITERAL

scan_statement
	: T_scanf '(' STRING_LITERAL ')'
	| T_scanf '(' STRING_LITERAL ',' identifier_list ')'

compound_statement
	: '{' {
		// cout<<"HERE\n";
		// cout<<"Value of for scope is "<<for_scope<<"\n";
			if(for_scope)
			{
				for_scope--;
				// cout<<"For scope value is "<<scope_count<<"\n";
			}
			else
			{
				test.create_map(++scope_count);
			}
		// cout<<"DISPLAY \n";
		// test.display();
		// cout<<"SCope count is "<<scope_count<<"\n";
		} 
		temp1
		{
			$<str>$ = $<str>2;
		}
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
	: statement							{ $<str>$ = $<str>1; }
	| statement_list statement			{ $<str>$ = $<str>1; }
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
	: IF '(' expression ')' 
		{
			cout<<"\n\nDEBUG\n\n";

       		char statement_type[20],arg1[10],arg2[10],arg3[10],temp[10],true_label[10],false_label[10];
			sprintf(statement_type,"conditional_goto");
			strcpy(arg1,$<str>3);
			strcpy(true_label,create_label());
			quple* new_record = new quple(statement_type, arg1, "", "", true_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);


			sprintf(statement_type,"goto");
			strcpy(false_label,create_label());
			new_record = new quple(statement_type,"","","",false_label, @1.first_line, @1.first_column); 
			test_q.insert_quple(new_record);

			new_record = new quple("label","","","",true_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
			$<str>$ = false_label;


		}

	  statement 
		{
			cout<<"\n\nDEBUG\n\n";
			quple* new_record = new quple("label","","","",$<str>5, @1.first_line, @1.first_column);
        	test_q.insert_quple(new_record);
		}
		else_stmt
	;

else_stmt
	:	%prec IFX
	| 	ELSE statement
	;
iteration_statement
	: FOR 
		{
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
	| error
	;

external_declaration
	: function_definition 
	| declaration 
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement 
	| declaration_specifiers declarator compound_statement 
	{
		// string temp = $2->get_identifier();
		// $2 = new node(*$1);
		// $2->set_identifier(temp);
		// cout<<*$2<<temp; 
		$2->set_type("proc");
		$2->set_size(size_map["int"]);
		test.insert($2);
	}
	| declarator declaration_list compound_statement 
	| declarator compound_statement
	;

%%

void yyerror(const char *error_msg) {
	// printf("\nSyntax Error: line no: \n", error_msg);
	printf("\n%s at line %d, column %d \n", error_msg, yylloc.first_line, yylloc.first_column);
	flag = 0;
	// yyerrok;
	// yyclearin;
}

#include <stdio.h>
extern char yytext[];
extern int column;
int main(int argc, char *argv[]) 
{


	scope_count = 0;
    size_map["char"]=1;
	size_map["int"]=4;
	size_map["float"]=4;
	size_map["double"]=8;
	size_map["void"]=0;



	// #if YYDEBUG
	// 	yydebug = 1;
	// #endif





	// if (!yyparse() && flag) 
	if (!yyparse() && flag) 
		printf("\n\n\nParsing is successful\n\n\n");
	else
		printf("\nParsing Unsuccessful.\n");

	cout<<"Displaying the Symbol Tables: \n";
	cout << test << "\n\n";
	test_q.disp_three_addr();
	// test.display();

//	fclose(yyout);
	return 0;
}