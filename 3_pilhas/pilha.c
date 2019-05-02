#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct pilha * create(){
    struct pilha *p;
        p->pilha = create_l();
        return p;   
}

int makenull(struct pilha * p){
    struct llist * temp;
        temp = p->pilha;
        if( !vazia(p) ){
			while( temp->tam > 0 ){
                pop(p);
            }
		return 1;
		}
        else
		    return 0;
}

int top(struct pilha * p){
    struct llist * temp;
        elem *aux;
        temp = p->pilha;
        aux = temp->tail;
        return aux->val;
}

int pop(struct pilha * p){
    struct llist * temp;
        temp = p->pilha;
        return delete_l( temp, get_l(temp,(temp->tam)-1) );
}

int push(struct pilha * p, int val){
    struct llist * temp;
        temp = p->pilha;
        return insert_l(temp, temp->tail, val);
}

 int vazia(struct pilha *p){
     struct llist * temp;
        temp = p->pilha;
        if( temp->tam > 0)
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
