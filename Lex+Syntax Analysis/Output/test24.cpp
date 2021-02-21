#include<iostream>


int main(){
	int i=0;
	for(int k=5;k<10;k++){
		int j;
			for(l
Identifier l not declared previously
=0;
ID:l
Failure
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
1             main         proc                       0           3            4              0           

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
2             k            int            5           4           5            9              2           

Symbol Table Number: 3.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             p            int            0           4           8            7              3           


