#include "simplegrade.h"
#include "fila.h"

#define MAX 5


void test_create(){
	DESCRIBE("CRIA FILA");
	WHEN("Eu crio uma FILA");


	IF("Sem parâmetros");
	THEN("Resultado deve ser ponteiro");
	struct fila * p = create();
	isNotNull(p,1);

	THEN("Deve ser vazia");
	isEqual(vazia(p),1,1);

	destroy(p);
}

void test_queue(){
	int i;
	struct fila * p = create();

	DESCRIBE("INSERE ELEMENTOS");
	WHEN("Eu insiro elementos");
	IF("Insiro um número razoável MAX");
	THEN("Deve inserir todos");
	for(i=1; i<=MAX; i++){
		isEqual(enqueue(p,i), 1,1);
	}
	THEN("Deve não estar vazia");
	isEqual(vazia(p),0,1);

	THEN("Primeiro elemento deve ser 1");
	isEqual(dequeue(p),1,1);

	destroy(p);
}

void test_dequeue(){

	int i;
	struct fila * p = create();


	DESCRIBE("REMOVE ELEMENTOS");
	WHEN("Eu removo os elementos de uma FILA");
	for(i=1; i<=MAX; i++){
		enqueue(p,i);
	}
	for(i=1; i<=MAX; i++){
		THEN("Deve ter cabeça igual a i");
		isEqual(dequeue(p),i,1);
	}

	THEN("Deve ser vazia");
	isEqual(vazia(p),1,1);
	destroy(p);
}


void test_makenull(){

	int i;
	struct fila * p = create();


	DESCRIBE("REMOVE TODOS OS ELEMENTOS");
	WHEN("Eu removo todos os elementos de uma FILA");
	for(i=1; i<=MAX; i++){
		enqueue(p,i);
	}
	makenull(p);
	THEN("Deve ser vazia");
	isEqual(vazia(p),1,1);
	destroy(p);
}


int main () {
	test_create();
	test_queue();
	test_dequeue();
	test_makenull();

	GRADEME();
	
	if (grade==maxgrade)
		return 0;
	else return grade;
}
