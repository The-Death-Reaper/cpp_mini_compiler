#include<iostream>


int main()
{
    int a = 5 +5;
}


Parsing is successful


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
1             a            int            t_0         4           5            8              1           
2             t_0          TEMP           5+5         0           5            12             1           




t_0 = 5 + 5
a =  t_0
