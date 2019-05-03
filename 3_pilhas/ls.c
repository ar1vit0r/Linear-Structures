#include "ls.h"
#include "stdlib.h"
#include "stdio.h"
/* Aqui devem ser implementadas as funções definidas em ls.h */

struct list * create_l(int max){
	struct list *desc;
	if(max < 1 )
		return NULL;
	else{
		if( (desc = malloc(sizeof(struct list))) == NULL )
			return NULL;
		desc->capacidade = max;	
		desc->ultimo = 0; //Guardando na posicao [0]
		if( ( desc->arm = malloc( max * sizeof(elem) ) ) == NULL) {
			free(desc); // Como ja foi alocado desc, eu tenho que desaloca-lo
			return NULL;
		}
		return desc;
	}
}

int insert_l(struct list *desc, int pos, elem item){ // O(n)
		if( full_l(desc) == 1 ){ 
			printf("Erro, Lista cheia \n");
			return 0;
		}
		else {
			if(pos > (desc->ultimo+1) || pos < 1){
				printf("Posiçao Inexistente \n");
				return 0;	
			}
			else {
				for(int i = desc->ultimo; i >= pos; i++ ){
					desc->arm[i] = desc->arm[i-1]; // abre espaço para o item. 
				} 
				desc->arm[pos-1] = item; 
				desc->ultimo += 1;
				return 1;
			}
		}
}

int removel_l(struct list *desc, int pos){ // O(n)
		if ( pos > desc->ultimo){
			printf("Erro, Elemento de posiçao %d inexistente",pos);
			return 0;
		}
		else{
			desc->ultimo = desc->ultimo - 1;
			for(int i = pos; i < desc->ultimo; i++)
				desc->arm[i] = desc->arm[i+1]; //copia os proximos para uma posiçao anterior.
			return 1;
		}
}

elem get_l(struct list *desc, int pos){ //O(1)
		if (pos > desc->ultimo || pos < 1){
		 	printf("Erro, Lista nao contem o elemento %d \n",pos);
			return 0;
		}
		else
			return desc->arm[pos-1];
}

int set_l(struct list *desc, int pos, elem item){ // O(1)
		if (pos > desc->ultimo || pos < 1){
		 	printf("Erro, Lista nao contem o elemento %d \n",pos);
			return 0;
		}
		else{
			desc->arm[pos-1] = item;
			return 1;
		}
}

int locate_l(struct list *desc, int pos, elem item){ // O(n)
		for(int i = pos - 1; i < desc->ultimo; i++){
			if(desc->arm[i] == item)
				return i+1;
		}
		return 0;
}

int length_l(struct list *desc){ // O(1)
		return desc->ultimo;
}

int max_l(struct list *desc){ // O(1)
		return desc->capacidade;
}

int full_l(struct list *desc){ // O(1)
		int lenght,maxi;

		lenght = length_l(desc);
		maxi = max_l(desc);

		if(lenght < maxi)
			return 0;
		return 1;
}

void destroy_l(struct list *desc){ // O(n)
		if(desc->ultimo > 0){
			for(int i = 1; i < desc->ultimo; i++)
				{ removel_l(desc,i); }
			
			free(desc);
			return;
		}
		printf("Lista Vazia \n");
		return;
}