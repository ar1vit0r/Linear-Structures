CC=gcc

CFLAGS=-Wall -Wextra -Werror -O0 -g -std=c11 -I.. 
LDFLAGS=-lm

all: teste
	./teste

pilha.o: pilha.c 
	
# Supondo que está usando a implementação de lista implementada anteriormente
teste: ls.o pilha.o -lm teste.c
#teste: $(cc) $(CFLAGS) ls.o pilha.o teste.c -o teste -lm

clean:
	rm -f pilha.o teste