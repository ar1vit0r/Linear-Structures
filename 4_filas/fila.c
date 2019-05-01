#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

struct fila * create(){
    struct fila *temp;
        temp->fila = create_l();
        return temp;   
}

int makenull(struct fila * f){ 
    struct fila *temp;
        temp = &(f->fila);
        if( !vazia(temp)){
			while( temp->tam > 0 ){
                delete_l(temp,temp->cabeca);
            }
		return 1;
		}
        else
		    return 0;
}

int dequeue(struct fila * f){ 
    struct fila *temp;
        temp = &(f->fila);
        temp = &(temp->cabeca)
        if( !vazia(temp)){
		    return temp->val;
		}
        else
		    return 0;
}

int enqueue(struct fila * f, int val){
    struct fila *temp;
        temp = &(f->fila);
        return insert_l(temp, temp->tail , val);
}

int vazia(struct fila * f){
    struct fila *temp;
        temp = &(f->fila);
        if( temp->tam > 0)
            return 0;
        else{
            printf("Fila Vazia \n");
        return 1;
        }
 }

void destroy(struct fila * f){
    struct fila *temp;
        temp = &(f->fila);
        if( !vazia(temp))
            makenull(temp);

    free(temp);
    return;
}
