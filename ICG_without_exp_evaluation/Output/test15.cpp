int a = b
Identifier b not declared previously
+c
Identifier c not declared previously
+d
Identifier d not declared previously
*e
Identifier e not declared previously
;
Parsing Unsuccessful.
Displaying the Symbol Tables: 
Symbol Table Number: 0.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             a            int            t_2         4           1            5              0           
2             t_2          TEMP           t_0+t_1     0           1            9              0           
3             t_1          TEMP           d*e         0           1            13             0           
4             t_0          TEMP           b+c         0           1            9              0           




t_0 = b + c
t_1 = d * e
t_2 = t_0 + t_1
a =  t_2
