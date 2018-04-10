#lex+yacc file.l file.y => file

.SUFFIXES: .h .c .o .y .l .tab.h .tab.c .tab.o .out
.PHONY: all

%: %.tab.o %.yy.o
	$(CC) -o $@ $^

%.tab.c: %.y
	$(YACC) -v -d -o $@ $<

%.yy.c: %.l
	$(LEX) -o $@ $<
