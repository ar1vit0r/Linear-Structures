#include "ls.h"


/* Aqui devem ser implementadas as funções definidas em ls.h */

struct list * create(int max){
			struct list *vetor;

			If(vetor = malloc(max*sizeof(struct list)) == NULL )
					return NULL;

			return vetor;
}

int insert(struct list *desc, int pos, elem item){
		int *temp;

		temp = (desc + (sizeof(struct list)*pos));
		if(temp->arm = item)
				return 1;
		return 0;
}

int removel(struct list *desc, int pos){
		int *temp;

		temp = (desc + (sizeof(struct list)*pos));

		if(free(temp))
				return 1;
		return 0:
}

elem get(struct list *desc, int pos){
		 int *temp;

		 temp = (desc + (sizeof(struct list)*pos);

		 return temp->elem;
}

int set(struct list *desc, int pos, elem item){
		int *temp;

		 temp = (desc + (sizeof(struct list)*pos);

		 if(temp->elem = item)
		 		return 1;
		 return 0;
}

int locate(struct list *desc, int pos, elem item)

int length(struct list *desc){
		int comp;
		struct list *temp;

		for(i = 0; i < desc->capacidade; i++){
				temp = (desc + (sizeof(struct list)*i);
				if(temp->elem != 0)
						comp++;
		}
		return comp;
}

int max(struct list *desc){
		return desc->capacidade;
}

int full(struct list *desc){
		int lenght,max;

		lenght = length(desc);
			 max = 	  max(desc);

			 if(lenght<max)
			 		return 0;
			 return 1;
}

void destroy(struct list *desc){
		struct list *temp;
	   	for(i=0; i<length(desc); i++){
			 		temp = (desc + (sizeof(struct list)*i);
					free(temp);
		  }
			return 1;
}
