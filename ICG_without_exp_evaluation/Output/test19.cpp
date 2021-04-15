#include<iostream>


int main(){
	int i=0;
	for(;i<5;){
		int j;
	}
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
1             i            int            0           4           4            5              1           

Symbol Table Number: 2.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             j            int                        4           6            6              2           
2             t_0          TEMP           i<5         0           5            6              2           




i =  0
L_0 : 
t_0 = i < 5
if  t_0  goto L_1
goto L_2
L_1 : 
goto L_0
L_2 : 
