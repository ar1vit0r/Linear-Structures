#include "le.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Aqui devem ser implementadas as funções definidas em le.h */

struct llist * create_l(){
    struct llist *desc;
        desc = malloc(sizeof(struct llist));
        if( desc == NULL) 
            return NULL;

        desc->cabeca = NULL;
        desc->tam = 0;
    return desc;        
}

elem * create_node(int val){
    elem *new;
        new = malloc(sizeof(elem));
        if( new == NULL)
            return NULL;
        
        new->val = val;
        new->next = NULL;
    return new;
 }  

int insert_l(struct llist *desc, elem * prev, elem * item){

        if( desc == NULL ){ // se desc for nulo, nao alocou ou n tem moria
            printf("Erro, Sem Memoria \n");
        return 0;
        }
        else{
            if( prev == NULL && desc->tam == 0 ){ 
                desc->tam += 1;
                elem *new;
                new = create_node(item->val);
                desc->cabeca = new;
            return 1;
            }
            if( prev == NULL) {
                elem *cabeca;
                elem *new;

                desc->tam += 1;
                new = create_node(item->val);

                cabeca = desc->cabeca;
                desc->cabeca = new;
                new->next = cabeca;
            return 1;
            }
            else{
                elem *temp;
                elem *new;

                desc->tam += 1;
                new = create_node(item->val);

                temp = prev->next;
                prev->next = new;
                new->next = temp;
            return 1;
            }
        }  
return 0;
}

int delete_l(struct llist *desc, elem * prev){
        elem *del;
        if ( desc == NULL ){
            printf("Erro, este e Nulo \n");
        return 0;
        }
        else{
            if( prev->next == NULL){
                printf("Erro, Proximo e Nulo \n");
            return 0;
            }
            else{
                desc->tam -= 1;
                del = prev->next;
                prev->next = del->next;
                free(del);
            return 1;
            }
        }
return 0;
}

elem * get_l(struct llist *desc, int pos){
        if( desc == NULL){
            printf("Erro, este e Nulo \n");
        return NULL;
        }
        else{
            if( pos < 1 || pos > desc->tam){
                printf("Erro, Posicao Invalida \n");
            return NULL;
            }
            else{
                int j;
                elem *temp;

                temp = desc->cabeca;
                for( j = 1; j < pos;  j++){
                    temp = temp->next;
                }
                if( temp == NULL){
                    printf("Erro, Elemento de indice %d nao existe \n",j);
                return NULL;
                }
                else{
                    return temp;  
                }
            }
        }
return NULL;
}

int set_l(struct llist *desc, int pos, int val){
    elem *temp;
        if( desc == NULL || pos < 1 || pos > desc->tam ){
            printf("Erro, Ponteiro e Nulo || Posicao Invalida \n");
        return 0;
        }
        else{
            temp = desc->cabeca;
            for(int i = 1; i < pos; i++){
                temp = temp->next;
            }
            temp->val = val;
        return 1;
        }
return 0;
}

elem * locate_l(struct llist *desc, elem * prev, int val){
    elem *temp;
        
        if( prev == NULL)
            temp = desc->cabeca;
        else
            temp = prev->next;

        while( temp->val != val && temp->next != NULL)
            temp  = temp->next;

        if( temp->val == val)
            return temp;
        else
            return NULL;
}

int length_l(struct llist *desc){
        return desc->tam;
}

void destroy_l(struct llist *desc){
    elem *del;
        del = desc->cabeca;
        for(int i = 1; i <= desc->tam; i++){
            delete_l(desc,del); 
        }
return;
}
