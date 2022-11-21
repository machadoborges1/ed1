#include <stdio.h>
#include "pilha2.c"
#include <stdlib.h>
#include <stdbool.h>

int main(){
    Pilha *pi;
    pi = criar_Pilha();
    if(pilha_vazia(pi)){
        printf("o\n");
    }
    else
        printf("nao\n");

    int x = tamanho_Pilha(pi);

    printf("%d",x);
    return 0;

    
}
