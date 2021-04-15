#include <iostream>


int main()
{
    for (i
Identifier i not declared previously
 = 0;Failure
 i
Identifier i not declared previously
 < 5; i
Identifier i not declared previously
++)
    {
        int j;
    }
}
Parsing Unsuccessful.
Displaying the Symbol Tables: 
Symbol Table Number: 0.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             main         proc                       4           3            4              0           

Symbol Table Number: 1.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------

Symbol Table Number: 2.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             j            int                        4           8            12             2           
2             t_0          TEMP           i<5         0           6            16             2           




i =  0
L_0 : 
t_0 = i < 5
if  t_0  goto L_1
goto L_2
L_1 : 
i = i + 1
goto L_0
L_2 : 
