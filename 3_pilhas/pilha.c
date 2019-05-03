#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct pilha * create(){
    struct pilha *desc;
        desc = malloc(sizeof(struct pilha));
        if(desc == NULL)
            return NULL;
		desc->pilha = create_l(5); // tamanho tem que ser conhecido de antemão
    return desc;
}

int makenull(struct pilha * p){
    struct list *temp;
        temp = p->pilha;
        if( !vazia(p)){
			while(temp->ultimo > 0){
                pop(p);
            }
		return 1;
		}
        else
		    return 0;
}

int top(struct pilha * p){
    struct list *temp;
        temp = p->pilha;
        return get_l(temp,temp->ultimo);
}

int pop(struct pilha * p){
    struct list *temp;
        temp = p->pilha;
        return removel_l(temp,temp->ultimo);
}

int push(struct pilha * p, int val){
    struct list *temp;
        temp = p->pilha;
        return insert_l(temp,temp->ultimo+1,val); //inserir depois do ultimo rsrs
}

 int vazia(struct pilha *p){
    struct list *temp;
        temp = p->pilha;
        if( length_l(temp) > 0)
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