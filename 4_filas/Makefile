CC=gcc

CFLAGS=-Wall -Wextra -Werror -O0 -g -std=c11 -I.. 
LDFLAGS=-lm

all: teste
	./teste

fila.o: fila.c
	

# Supondo que está usando a implementação de lista implementada anteriormente
teste: ls.o fila.o teste.c

clean:
	rm -f fila.o teste