GRAPH = gnuplot

CC = clang
CFLAGS = -Wall -O0 -g 
LFLAGS = -O0 -g
LIBS = -lgsl -lm

q2: q2a.o q2b.o
	${CC} $(LFLAGS) -o $@ $^ $(LIBS)

res1: q2
	./q2 > res1

Stable.png: stable.gpl res1
	$(GRAPH) stable.gpl

clean : 
	rm -f *~
	rm -f *.o
	rm -f q2

veryclean : clean
	rm -f res1 q2.png
