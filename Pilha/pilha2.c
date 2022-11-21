#include "pilha2.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

struct pilha{
    struct empresa elemento[MAX];
    int tamanho;
};

Pilha* criar_Pilha(){
    Pilha* pi;
    pi = malloc(sizeof(struct pilha));
    if(pi != NULL){
        pi->tamanho = 0;
        return pi;
    }
}

void liberar_Pilha(Pilha* pi){
    free(pi);
}

bool pilha_vazia(Pilha* pi){
    if(pi != NULL){
        if(pi->tamanho == 0) return true;
    }
    return false;
}

bool Pilha_cheia(Pilha* pi){
    if(pi != NULL){
        if(pi->tamanho == MAX) return true;
    }
    return false;
}

bool empilhar(Pilha* pi, struct empresa emp){
    if(Pilha_cheia(pi) || (pi!=NULL)) return false;
    pi->elemento[pi->tamanho] = emp;
    pi->tamanho++;
    return true;
}

int tamanho_Pilha(Pilha* pi){
    if(pi != NULL){
        return pi->tamanho;
    }
    return -1;
}

