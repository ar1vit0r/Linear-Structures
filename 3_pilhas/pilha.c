#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct pilha * create(){
    return create_l();  
}

int makenull(struct pilha * p){
        if( !vazia(p)){
			while( lenght_l(p) > 0 ){
                delete_l(p,p->tail);
            }
		return 1;
		}
        else
		    return 0;
}

int top(struct pilha * p){
        return p->tail;
}

int pop(struct pilha * p){
        int *temp; 

        temp = (get_l(p, length_l(p)))->val ;
        delete_l(p,p->tail);
        return temp;
}

int push(struct pilha * p, int val){
        return insert_l(p, p->tail , val);
}

 int vazia(struct pilha *p){
        if( p->tam > 0)
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