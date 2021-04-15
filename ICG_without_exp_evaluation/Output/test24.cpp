#include<iostream>


int main(){
	int i=0;
	for(int k=5;k<10;k++){
		int j;
			for(l
Identifier l not declared previously
=0;Failure
l
Identifier l not declared previously
<5;l
Identifier l not declared previously
++){
			int p=0;
		}
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
1             i            int            0           4           4            5              1           

Symbol Table Number: 2.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             j            int                        4           6            6              2           
2             t_0          TEMP           k<10        0           5            13             2           
3             k            int            5           4           5            9              2           

Symbol Table Number: 3.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             p            int            0           4           8            7              3           
2             t_1          TEMP           l<5         0           7            11             3           




i =  0
k =  5
L_0 : 
t_0 = k < 10
if  t_0  goto L_1
goto L_2
L_1 : 
l =  0
L_3 : 
t_1 = l < 5
if  t_1  goto L_4
goto L_5
L_4 : 
p =  0
l = l + 1
goto L_3
L_5 : 
k = k + 1
goto L_0
L_2 : 
