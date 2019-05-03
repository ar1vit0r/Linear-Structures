.PHONY: ls le pilha fila all clean


all: ls le pilha fila

ls:
	$(MAKE) -C 1_lista_sequencial

le:
	$(MAKE) -C 2_lista_encadeada

pilha:	
	$(MAKE) -C 3_pilhas

fila:
	$(MAKE) -C 4_filas


clean:
	$(MAKE) clean -C 1_lista_sequencial
	$(MAKE) clean -C 2_lista_encadeada
	$(MAKE) clean -C 3_pilhas
	$(MAKE) clean -C 4_filas

