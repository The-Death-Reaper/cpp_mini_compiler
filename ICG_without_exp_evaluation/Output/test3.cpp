
int main()
{
    int a=1;
    int b=2*3+4+5;
    int c=a+b;
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
1             c            int            t_3         4           6            8              1           
2             t_3          TEMP           a+b         0           6            10             1           
3             b            int            t_2         4           5            8              1           
4             t_2          TEMP           t_1+5       0           5            10             1           
5             t_1          TEMP           t_0+4       0           5            10             1           
6             t_0          TEMP           2*3         0           5            10             1           
7             a            int            1           4           4            8              1           




a =  1
t_0 = 2 * 3
t_1 = t_0 + 4
t_2 = t_1 + 5
b =  t_2
t_3 = a + b
c =  t_3
