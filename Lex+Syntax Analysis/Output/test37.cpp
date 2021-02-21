int main(){
   int a = 5;
   float c = 5.7;
   char d = 'a';
   a = 10;
ID:a

}


Parsing is successful


Displaying the Symbol Tables: 
Symbol Table Number: 0.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             main         proc                       0           1            5              0           

Symbol Table Number: 1.0
---------------------------------------------------------------------------------------------------
SNo 	|	Token 	|	Datatype	|	Value	|	Size	|	Line No	|	Column No	|	Scope	
---------------------------------------------------------------------------------------------------
1             c            float          5.7         4           4            9              1           
2             d            char           'a'         1           5            8              1           
3             a            int            10          4           3            7              1           


