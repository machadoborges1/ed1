#include <stdbool.h>
#define MAX 50

struct empresa{
    int cnpj;
    char nome[10];
};

typedef struct pilha Pilha;

Pilha* criar_Pilha();
void liberar_Pilha(Pilha* pi);
bool Pilha_vazia(Pilha* pi);
bool Pilha_cheia(Pilha* pi);
int tamanho_Pilha(Pilha* pi);
bool empilhar(Pilha* pi, struct empresa emp);
bool remover_topo(Pilha* pi);
bool verificar_topo(Pilha* pi, struct empresa emp);

