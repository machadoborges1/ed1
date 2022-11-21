#include "fila.c"
#include <stdlib.h>
#include <stdio.h>

int main(){

    Fila *fila;
    fila = criarFila();
    struct empresa emp;
    emp.cep = 123;

    inserirFila(fila, emp);
    int tam = tamanhoFila(fila);

    printf("\n\n%d", tam);

    return 0;
}