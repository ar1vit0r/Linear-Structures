#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct pilha * create(){
    struct pilha *temp;
        temp->pilha = create_l();
        return temp;  
}

int makenull(struct pilha * p){
    struct pilha *temp;
        temp = &(p->pilha);
        if( !vazia(temp)){
			while( temp->tam > 0 ){
                delete_l(temp,temp->tail);
            }
		return 1;
		}
        else
		    return 0;
}

int top(struct pilha * p){
    struct pilha *temp;
        temp = &(p->pilha);
        temp = &(temp->tail);
        return temp->val;
}

int pop(struct pilha * p){
    struct pilha *temp;
        int val;

        temp = &(p->pilha);
        temp = &(temp->tail)
        val = temp->val;
        
        delete_l(p,temp);
        return val;
}

int push(struct pilha * p, int val){
    struct pilha *temp;
        temp = &(p->pilha);
        return insert_l(p, temp->tail , val);
}

 int vazia(struct pilha *p){
    struct pilha *temp;
        temp = &(p->pilha);
        if( temp->tam > 0)
            return 0;
        else{
            printf("Pilha Vazia \n");
        return 1;
        }
}

void destroy(struct pilha * p){
    struct pilha *temp;
        temp = &(p->pilha);
    if( !vazia(temp))
        makenull(temp);

    free(temp);
    return;
}
