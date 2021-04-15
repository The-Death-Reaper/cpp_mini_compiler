#include <algorithm>

 int     a     =5;
int b;
float c = 9;
int main()
{
    if (1)
    {
        ;
    }
    else 
    {
        if (2)
        {
            ;
        }
        if()
syntax error, unexpected ')' at line 18, column 11 
;
    }
    
}
Parsing Unsuccessful.
Displaying the Symbol Tables: 
Symbol Table Number: 0.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             c            float          9           4           4            6              0           
2             b            int                        4           3            4              0           
3             a            int            5           4           2            9              0           

Symbol Table Number: 1.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------

Symbol Table Number: 2.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
Symbol Table Number: 2.1
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------

Symbol Table Number: 3.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------




a =  5
c =  9
if  1  goto L_0
goto L_1
L_0 : 
goto final_0
L_1 : 
if  2  goto L_2
goto L_3
L_2 : 
goto final_0
L_3 : 
final_0 : 
