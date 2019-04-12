#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct pilha * create(){
    struct pilha *desc;
		if( (desc = malloc(sizeof(struct pilha))) == NULL )
			return NULL;

		desc->ultimo = 0; 
        desc->arm = NULL;
    return desc;
}

int makenull(struct pilha * p){
        if( !vazia(p)){
			for(int i = p->ultimo; i > 0; i--){
                free( &(p->arm[i]) );  //free no endereço onde 'e o atual topo.
            }
		return 1;
		}
        else
		    return 0;
}

int top(struct pilha * p){
        return get(p,p->ultimo);
}

int pop(struct pilha * p){
        return removel(p,p->ultimo);
}

int push(struct pilha * p, int val){
        return insert(p,p->ultimo,val);
}

 int vazia(struct pilha *p){
        if( p->ultimo > 0)
            return 0;
        else{
            printf("Pilha Vazia \n");
        return 1;
        }
}

void destroy(struct pilha * p){
    if( !vazia(p))
        makenull(p);

    free(p);
    return;
}