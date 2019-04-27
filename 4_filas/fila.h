#define elem int
//#include "ls.h"

/** Descritor da fila
  */
struct fila{
   /* seu código aqui, deve usar uma lista */
  int ultimo; // usar uma struct list aqui, trocar nome de algumas funções...
  elem * arm;
};

/** Cria uma fila
 * @return  um descritor ou NULL
 */
struct fila * create();

/** Apaga todos elementos da fila
 * @param p descritor da fila
 * @return 1 se OK, 0 se erro
 */
int makenull(struct fila * f);

/* Retorna o elemento mais antigo da fila ou zero se não existir
 * @param p descritor da fila
 * @return o elemento ou 0
 */
int dequeue(struct fila * f);

/* Insere um elemento no fim da fila
 * @param p descritor de fila
 * @param val elemento a ser inserido
 * @return 1 se OK, 0 se erro
 */
int enqueue(struct fila * f, int val);

/* Retorna se a fila está vazia ou não
 * @param p descritor de fila
 * @return 1 se vazia, 0 se não
 */
 int vazia(struct fila * f);
/** Desaloca toda a fila
  * @param p descritor da fila
  */
void destroy(struct fila * f);
