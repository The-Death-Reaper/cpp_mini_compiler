lex_scanner: lex_scanner.c lex_scanner.h lex.yy.c
	gcc -c lex_scanner.c 
	gcc -c lex.yy.c 
	gcc lex_scanner.o lex.yy.o -o lex_scanner 

lex.yy.c: lex_scanner.l
	lex lex_scanner.l

clean:
	rm *.o
	rm lex.yy.c lex_scanner
