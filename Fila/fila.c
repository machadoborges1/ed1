#include "fila.h"
#include <stdio.h>

struct fila {
    struct empresa emp[MAX];
    int tamanho;
    int inicio;
    int fim;
};

Fila* criarFila(){
    Fila* fi;
    fi = malloc(sizeof(struct fila));
    if(fi != NULL){
        fi->tamanho = 0;
        fi->inicio = 0;
        fi->fim = 0;
        return fi;
    }
}

void deletarFila(Fila* fi){
    free(fi);
}

int FilaCheia(Fila* fi){
    if(fi == NULL) return -1;
    if(fi->tamanho == MAX) return 1;
    else return 0;
}

int FilaVazia(Fila* fi){
    if(fi == NULL) return -1;
    if(fi->tamanho == 0) return 1;
    else return 0;
}

int inserirFila(Fila* fi, struct empresa dados){
    if(fi == NULL || FilaCheia(fi)) return 0;
    fi->emp[fi->fim] = dados;
    fi->fim++;
    fi->tamanho++;
}

int sairFila(Fila* fi){
    if(fi == NULL || FilaVazia(fi)) return 0;
    fi->inicio++;
    fi->tamanho--;
}

int tamanhoFila(Fila* fi){
    if(fi == NULL) return -1;
    return fi->tamanho;
}
