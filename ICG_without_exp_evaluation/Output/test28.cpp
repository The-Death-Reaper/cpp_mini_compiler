#include <iostream>

int main()
{
for(int i =0 ;i<5;i++){
}
}


Parsing is successful


Displaying the Symbol Tables: 
Symbol Table Number: 0.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             main         proc                       4           2            4              0           

Symbol Table Number: 1.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------

Symbol Table Number: 2.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             t_0          TEMP           i<5         0           4            14             2           
2             i            int            0           4           4            8              2           




i =  0
L_0 : 
t_0 = i < 5
if  t_0  goto L_1
goto L_2
L_1 : 
i = i + 1
goto L_0
L_2 : 
