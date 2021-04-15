%{
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"
#include <vector>
#include <typeinfo>
#define A exp
#define B ect
// #define YYDEBUG 1
using namespace std;
st test;
// st test1;
int temp_no = 0;
int label_no = 0;
int final_no = 0;
unordered_map <string,int> size_map;
node* type;
int flag=1;
quple_list test_q;
vector<quple*> test_q_for;
vector<int> num_to_pop;
// vector<int> final_num;
int final_or = 0;
int final_and = 0;


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




vector<char*> fl_list;
vector<int> f_update;
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
/* %expect 1 */
%locations
%union {
	char* str;
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
%token <str> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID CLASS
%token <str> STRUCT UNION ENUM ELLIPSIS

%token <str> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN T_printf T_scanf T_cin T_cout
%nonassoc IFX
%nonassoc ELSE

%type <node> declaration init_declarator type_specifier declaration_specifiers
%type <node> declarator direct_declarator error f_declarator
%type <str> initializer initializer_list 
%type <str> conditional_expression logical_or_expression logical_and_expression assignment_expression
%type <str> inclusive_or_expression exclusive_or_expression and_expression
%type <str> equality_expression relational_expression shift_expression additive_expression
%type <str> multiplicative_expression unary_expression postfix_expression f_unary_expression f_postfix_expression for_update for_expression

%type <str> primary_expression class_declaration 

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
	| STRING_LITERAL 		{ $$ = $1; }
	| '(' expression ')' 	{ $$ = $<str>2; }
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
	| primary_expression INC_OP 							{ vector<string> temp1{$1, $2}; $$ = conversion(temp1); 
	}
	| primary_expression DEC_OP 							{ vector<string> temp1{$1, $2}; $$ = conversion(temp1); 
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
			char temp[10];
			strcpy(temp,create_temp());
			quple* new_record = new quple("expression", "*", $1, $3, temp, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
			strcat($1, "*");
			strcat($1, $3);
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;
		}
	| multiplicative_expression '/' unary_expression 	
		{ 	
			char temp[10];
			strcpy(temp,create_temp());
			quple* new_record = new quple("expression", "/", $1, $3, temp, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
			strcat($1, "/");
			strcat($1, $3);
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;
		}
	| multiplicative_expression '%' unary_expression
		{ 
			char temp[10];
			strcpy(temp,create_temp());
			quple* new_record = new quple("expression", "%", $1, $3, temp, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
			strcat($1, "%");
			strcat($1, $3);
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;
		}
	;

additive_expression
	: multiplicative_expression 						
		{ 
			$$ = $1;
		}
	| additive_expression '+' multiplicative_expression 
		{ 
			//vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "+", $1, $3, temp, @1.first_line, @1.first_column);

			test_q.insert_quple(new_record);
			strcat($1, "+");
			strcat($1, $3);
			// cout << temp << "\n";
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;
		}
	| additive_expression '-' multiplicative_expression 
		{ 
			//vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);
			
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "-", $1, $3, temp, @1.first_line, @1.first_column);

			test_q.insert_quple(new_record);
			strcat($1, "-");
			strcat($1, $3);
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;
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
	| relational_expression '<' shift_expression 		
		{ 
			//vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);

			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "<", $1, $3, temp, @1.first_line, @1.first_column);

			test_q.insert_quple(new_record);
			strcat($1, "<");
			strcat($1, $3);
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;

		}
	| relational_expression '>' shift_expression 		
		{ 
			//vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", ">", $1, $3, temp, @1.first_line, @1.first_column);

			test_q.insert_quple(new_record);
			strcat($1, ">");
			strcat($1, $3);
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;
		}
	| relational_expression LE_OP shift_expression 		
		{ 
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "<=", $1, $3, temp, @1.first_line, @1.first_column);

			test_q.insert_quple(new_record);
			strcat($1, "<=");
			strcat($1, $3);
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;
		}
	| relational_expression GE_OP shift_expression 		
		{ 
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", ">=", $1, $3, temp, @1.first_line, @1.first_column);

			test_q.insert_quple(new_record);
			strcat($1, ">=");
			strcat($1, $3);
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;
		}
	;

equality_expression
	: relational_expression 							
		{ 
			$$ = $1;
		}
	| equality_expression EQ_OP relational_expression 	
		{ 
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "==", $1, $3, temp, @1.first_line, @1.first_column);

			test_q.insert_quple(new_record);
			strcat($1, "==");
			strcat($1, $3);
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;
		}
	| equality_expression NE_OP relational_expression 	
		{ 
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "!=", $1, $3, temp, @1.first_line, @1.first_column);

			test_q.insert_quple(new_record);
			strcat($1, "!=");
			strcat($1, $3);
			test.insert(@1.first_line, temp, "TEMP", $1, 0, scope_count, @1.first_column);
			$$ = temp;
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
	| logical_and_expression 
		{
			// if($1[0]!='x')
			{
				quple* new_record;
				char* t_label = new char[10];
				strcpy(t_label, create_label());
				label_count;

			if($1[0]!='x')
				{
					new_record = new quple("conditional_goto", $1, "", "", t_label, @1.first_line, @1.first_column);
					test_q.insert_quple(new_record);
				}
				
				new_record = new quple("label", $1, "", "", t_label, @1.first_line, @1.first_column);
				test_q.insert_quple(new_record);
			}
		}
	  AND_OP inclusive_or_expression 	
		{ 
			quple* new_record;
			char* t_label = new char[10];
			strcpy(t_label, create_label());
			label_count--;

			if($4[0]!='x')
			{
				new_record = new quple("conditional_goto", $4, "", "", t_label, @1.first_line, @1.first_column);
				test_q.insert_quple(new_record);
			}


			char* flag_f = new char[10];
			strcpy(flag_f, "x");
			$$ = flag_f;
		}
	;

logical_or_expression
	: logical_and_expression						 		
		{ 
			$$ = $1;
		}
	| logical_or_expression 
		{
			if($1[0]!='x')
			{
				quple* new_record;
				char* t_label = new char[10];
				strcpy(t_label, create_label());
				label_count--;

				new_record = new quple("conditional_goto", $1, "", "", t_label, @1.first_line, @1.first_column);
				test_q.insert_quple(new_record);
			}
		}
	  OR_OP logical_and_expression 	
		{ 
			quple* new_record;
			char* t_label = new char[10];
			strcpy(t_label, create_label());
			label_count--;

			if($4[0]!='x')
			{
				new_record = new quple("conditional_goto", $4, "", "", t_label, @1.first_line, @1.first_column);
				test_q.insert_quple(new_record);
			}

			char* flag_f = new char[10];
			strcpy(flag_f, "x");
			$$ = flag_f;
		}
	;

conditional_expression
	: logical_or_expression 											
		{ 
			final_or;
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
		quple* new_record = new quple("assignment", "", $3, "", $1, @1.first_line, @1.first_column);
		test_q.insert_quple(new_record);
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
	: declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: type_specifier 
		{ 
			$1->set_size(size_map[$1->get_type()]); 					   
			type = $1;
			$$ = $1;
		}
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

			quple* new_record = new quple("assignment","",$3,"",$1->get_identifier(), @1.first_line, @1.first_column);
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

f_declarator
	: IDENTIFIER '(' parameter_type_list ')' { $$ = $1; }
	| IDENTIFIER '(' ')' { $$ = $1; }

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
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'						{ $$=$1; }
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
			// cout<<"\n\nDEBUG\n\n";
			quple* new_record;
			if($<str>3[0]!='x')
			{
				char* true_label = new char[10];
				strcpy(true_label,create_label());
				new_record = new quple("conditional_goto", $<str>3, "", "", true_label, @1.first_line, @1.first_column);
				test_q.insert_quple(new_record);
				


				char* false_label = new char[10];
				strcpy(false_label,create_label());
				new_record = new quple("goto","","","",false_label, @1.first_line, @1.first_column); 
				test_q.insert_quple(new_record);



				new_record = new quple("label","","","",true_label, @1.first_line, @1.first_column);
				test_q.insert_quple(new_record);
				$<str>$ = false_label;


				
			}
			else
			{
				char* true_label = new char[10];
				strcpy(true_label,create_label());

				char* false_label = new char[10];
				strcpy(false_label,create_label());
				new_record = new quple("goto","","","",false_label, @1.first_line, @1.first_column); 
				test_q.insert_quple(new_record);



				new_record = new quple("label","","","",true_label, @1.first_line, @1.first_column);
				test_q.insert_quple(new_record);
				$<str>$ = false_label;
			}

		}

	  statement 
		{
			// cout<<"\n\nDEBUG\n\n";
			char final_label[10];
			sprintf(final_label, "final_%d", final_no);
			quple* new_record = new quple("goto","","","",final_label , @1.first_line, @1.first_column);
        	test_q.insert_quple(new_record);


			new_record = new quple("label","","","",$<str>5, @1.first_line, @1.first_column);
        	test_q.insert_quple(new_record);
		}
		else_stmt
		{
			char final_label[10];
			sprintf(final_label, "final_%d", final_no++);
			quple* new_record = new quple("label","","","",final_label, @1.first_line, @1.first_column);
        	test_q.insert_quple(new_record);
		}
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
	: '(' for_expression_statement
		{
			char* for_label = new char[10];
			strcpy(for_label,create_label());
			quple* new_record = new quple("label", "", "", "", for_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
			$<str>$ = for_label;
			fl_list.push_back(for_label);
		}
		for_2
for_2
	: expression_statement ')'
		{
			quple* new_record;
			char* body_label = new char[10];
			char* break_label = new char[10];
			strcpy(body_label,create_label());
			strcpy(break_label,create_label());
			if($<str>1[0]!=';')
				new_record = new quple("conditional_goto",$<str>1,"","",body_label, @1.first_line, @1.first_column);
			else
				new_record = new quple("conditional_goto","1","","",body_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
			new_record = new quple("goto","","","",break_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
			new_record = new quple("label","","","",body_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
        	$<str>$=break_label;
		}
	  statement
		{
			char* for_label = new char[10];
			strcpy(for_label,fl_list.back());
			fl_list.pop_back();
			quple* new_record = new quple("goto","","","",for_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);


			char* break_label = new char[10];
			strcpy(break_label,$<str>3);
			new_record = new quple("label","","","",break_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);

		}
	| expression_statement
		{
			num_to_pop.push_back(1);
		} 
	  for_expression ')'
		{
			quple* new_record;
			char* body_label = new char[10];
			char* break_label = new char[10];
			strcpy(body_label,create_label());
			strcpy(break_label,create_label());
			if($<str>1[0]!=';')
				new_record = new quple("conditional_goto",$<str>1,"","",body_label, @1.first_line, @1.first_column);
			else
				new_record = new quple("conditional_goto","1","","",body_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
			new_record = new quple("goto","","","",break_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
			new_record = new quple("label","","","",body_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
        	$<str>$=break_label;
		}
	  statement
		{
			int n = num_to_pop.back();
			num_to_pop.pop_back();
			while(n)
			{
				--n;
				quple* iter = test_q_for.back();
				test_q_for.pop_back();
				test_q.insert_quple(iter);
			}

			char* for_label = new char[10];
			strcpy(for_label,fl_list.back());
			fl_list.pop_back();
			quple* new_record = new quple("goto","","","",for_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);


			char* break_label = new char[10];
			strcpy(break_label,$<str>5);
			new_record = new quple("label","","","",break_label, @1.first_line, @1.first_column);
			test_q.insert_quple(new_record);
		}
	;

for_expression
	: for_update ',' for_expression 
		{
			++num_to_pop.back();
			quple* new_record;
			int inc = f_update.back();
			f_update.pop_back();
			if(inc>=0)
				new_record = new quple("expression", "+", $1, to_string(inc), $1, @1.first_line, @1.first_column);
			else
				new_record = new quple("expression", "-", $1, to_string(-1*inc), $1, @1.first_line, @1.first_column);
			test_q_for.push_back(new_record);
		}
	| for_update					
		{
			//++num_to_pop.back();
			quple* new_record;
			int inc = f_update.back();
			f_update.pop_back();
			if(inc>=0)
				new_record = new quple("expression", "+", $1, to_string(inc), $1, @1.first_line, @1.first_column);
			else
				new_record = new quple("expression", "-", $1, to_string(-1*inc), $1, @1.first_line, @1.first_column);
			test_q_for.push_back(new_record);
			$$ = $1;
		}
	;
for_update
	: f_unary_expression
		{
			// if( !test.declaration_exists($1, scope_count) )
			// {
			// 	flag = 0;
			// 	cout << "\n" << "Identifier " << $1 <<" not declared previously\n";
			// }
			$$ = $1;
		}
	;
f_postfix_expression
	: primary_expression 									{ $$ = $1; f_update.push_back(0); }
	| f_postfix_expression '[' expression ']'
	| f_postfix_expression '(' ')'
	| f_postfix_expression '(' argument_expression_list ')'
	| f_postfix_expression '.' IDENTIFIER
	| primary_expression INC_OP 							{ $$ = $1; f_update.push_back(1); }
	| primary_expression DEC_OP 							{ $$ = $1; f_update.push_back(-1); }
	;

f_unary_expression
	: f_postfix_expression 				{ $$ = $1; }
	| INC_OP f_unary_expression 			
		{ 
			// if( !test.declaration_exists($2, scope_count) )
			// {
			// 	flag = 0;
			// 	cout << "\n" << "Identifier " << $1->get_identifier() <<" not declared previously\n";
			// }
			// quple* new_record;
			// new_record = new quple("expression", "+")
			++f_update.back();
			$$ = $2;

		}
	| DEC_OP f_unary_expression 			
		{ 
			--f_update.back();
			$$ = $2;
		}
	;

jump_statement
	: RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	| class_declaration 
	| translation_unit class_declaration
	| error
	;

class_declaration
	: CLASS IDENTIFIER '{' external_declaration '}' ';'
		{
			$2->set_type("class");
			$2->set_value("class");
			test.insert($2);
		}
	| CLASS IDENTIFIER '{' '}' ';'
		{
			$2->set_type("class");
			$2->set_value("class");
			test.insert($2);
		}
	;

external_declaration
	: function_definition 
	| declaration 
	;

function_definition
	: declaration_specifiers declarator compound_statement 
		{
			// string temp = $2->get_identifier();
			// $2 = new node(*$1);
			// $2->set_identifier(temp);
			// cout<<*$2<<temp; 
			$2->set_type("proc");
			$2->set_size(size_map["int"]);
			test.insert($2);
		}
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
	// test_q.disp();
	// test.display();

//	fclose(yyout);
	return 0;
}