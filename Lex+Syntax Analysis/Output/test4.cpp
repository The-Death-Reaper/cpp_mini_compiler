#include <iostream>

int main()
{
for(i
Identifier i not declared previously
=0;
ID:i
Failure
i
Identifier i not declared previously
<n
Identifier n not declared previously
;i
Identifier i not declared previously
=5)
ID:i
Failure
{
	int i;
	int j=5;
}
}
Parsing Unsuccessful.
Displaying the Symbol Tables: 
Symbol Table Number: 0.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             main         proc                       0           2            4              0           

Symbol Table Number: 1.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------

Symbol Table Number: 2.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             j            int            5           4           6            5              2           
2             i            int                        4           5            5              2           


