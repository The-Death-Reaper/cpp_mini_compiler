# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean

CC = g++                      # compiler to use
LINKERFLAG = -ll -ly

SRCS_L := $(wildcard *.l)
SRCS_Y := $(wildcard *.y)
SRCS_CPP := $(wildcard *.cpp)


objects = y.tab.c lex.yy.c $(SRCS_CPP)

exec: $(objects)
	${CC} -o exec $(objects) -ll

y.tab.c: $(SRCS_Y)
	@echo "Checking.."
	yacc -d --verbose $< -o y.tab.c

lex.yy.c: $(SRCS_L)
	@echo "Creating object.."
	lex $< 

clean:
	@echo "Cleaning up..."
	mkdir ashdu8asjido
	mv Makefile *.l *.y *.sh *.cpp *.hpp flow ashdu8asjido 
	find . -maxdepth 1 -type f -exec rm -fv {} \;
	mv ashdu8asjido/* .
	rmdir ashdu8asjido