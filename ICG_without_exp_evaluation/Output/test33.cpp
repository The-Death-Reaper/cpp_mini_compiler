int a = 5*a
Identifier a not declared previously
+4-1/4%1;
Parsing Unsuccessful.
Displaying the Symbol Tables: 
Symbol Table Number: 0.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             a            int            t_4         4           1            5              0           
2             t_4          TEMP           t_1-t_3%1   0           1            9              0           
3             t_3%1        TEMP           t_3%1       0           1            15             0           
4             t_2          TEMP           1/4         0           1            15             0           
5             t_1          TEMP           t_0+4       0           1            9              0           
6             t_0          TEMP           5*a         0           1            9              0           




t_0 = 5 * a
t_1 = t_0 + 4
t_2 = 1 / 4
t_3 = t_3 % 1
t_4 = t_1 - t_3%1
a =  t_4
