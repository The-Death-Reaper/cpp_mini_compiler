#include <iostream>

int q=1.5;
int main()
{
    for (int i =0 ;i<5;----i--)
    {
        int j = 10;
    }
}


Parsing is successful


Displaying the Symbol Tables: 
Symbol Table Number: 0.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             main         proc                       4           3            4              0           
2             q            int            1           4           2            4              0           

Symbol Table Number: 1.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------

Symbol Table Number: 2.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             j            int            10          4           8            12             2           
2             t_0          TEMP           i<5         0           6            19             2           
3             i            int            0           4           6            13             2           




q =  1
i =  0
L_0 : 
t_0 = i < 5
if  t_0  goto L_1
goto L_2
L_1 : 
j =  10
i = i - 3
goto L_0
L_2 : 
