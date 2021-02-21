int a = 3
int
syntax error, unexpected INT at line 2, column 0 
 b = 5;
int c = a
Identifier a not declared previously
 + b
Identifier b not declared previously
;
void a = 0;

Parsing Unsuccessful.
Displaying the Symbol Tables: 
Symbol Table Number: 0.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             a            void           0           0           4            5              0           
2             c            int            a+b         4           3            4              0           


