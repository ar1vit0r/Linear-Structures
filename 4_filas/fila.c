#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

struct fila * create(){
    return create_l();   
}

int makenull(struct fila * f){ // Apaga todos elementos da fila?
        if( !vazia(f)){
			while( f->fila->tam > 0 ){
                delete_l(f,f->cabeca);
            }
		return 1;
		}
        else
		    return 0;
}

int dequeue(struct fila * f){ // Retorna o elemento mais antigo da fila ou zero se não existir?
         if( !vazia(f)){
		    return (get_l(f,f->cabeca)->val);
		}
        else
		    return 0;
}

int enqueue(struct fila * f, int val){
         return insert_l(f, f->tail , val);
}

int vazia(struct fila * f){
        if( lenght_l(f) > 0)
            return 0;
        else{
            printf("Fila Vazia \n");
        return 1;
        }
 }

void destroy(struct fila * f){
        if( !vazia(f))
            makenull(f);

    free(f);
    return;
}
