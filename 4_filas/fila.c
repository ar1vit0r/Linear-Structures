#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

struct fila * create(){
    struct fila *desc;
		if( (desc = malloc(sizeof(struct fila))) == NULL )
			return NULL;

		desc->ultimo = 0; 
        desc->arm = NULL;
    return desc;
}

int makenull(struct fila * f){ // Apaga todos elementos da fila?
        if( !vazia(f)){
			for(int i = f->ultimo; i > 0; i--){
                free( &(f->arm[i]) );  //free no endereço onde 'e o atual topo.
            }
		return 1;
		}
        else
		    return 0;
}

int dequeue(struct fila * f){ // Retorna o elemento mais antigo da fila ou zero se não existir?
         if( !vazia(f)){
			removel(f,f->ultimo); // == pop?
		return 1;
		}
        else
		    return 0;
}

int enqueue(struct fila * f, int val){
         return insert(f,f->ultimo,val);
}

 int vazia(struct fila * f){
        if( f->ultimo > 0)
            return 0;
        else{
            printf("Pilha Vazia \n");
        return 1;
        }
 }

void destroy(struct fila * f){
        if( !vazia(f))
            makenull(f);

    free(f);
    return;
}
