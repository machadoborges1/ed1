
#define MAX 50

struct empresa {
    int cep;
};

typedef struct fila Fila;

Fila* criarFila();
void deletarFila(Fila* fi);
int FilaCheia(Fila* fi);
int FilaVazia(Fila* fi);
int inserirFila(Fila* fi, struct empresa dados);
int sairFila(Fila* fi);
int tamanhoFila(Fila* fi);