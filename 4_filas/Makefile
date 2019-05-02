CC=gcc

CFLAGS=-Wall -Wextra -Werror -O0 -g -std=c11 -I.. 
LDFLAGS=-lm

all: teste
	./teste

fila.o: fila.c

# Supondo que está usando a implementação de lista implementada anteriormente
teste: le.o fila.o -lm teste.c
#teste: $(cc) $(CFLAGS) le.o fila.o teste.c -o teste -lm

clean:
	rm -f fila.o teste