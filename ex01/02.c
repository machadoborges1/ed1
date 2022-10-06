#include <stdio.h>
#include <stdlib.h>

int **cria_matriz(int linha, int coluna){
    while(linha > 5 || coluna > 5){
        printf("Por favor escolha um valor ate 5 para o numero de linhas e colunas");
        printf("numero de linhas, colunas");
        scanf("%d %d", linha, coluna);
    }
    int **matriz = (int**) malloc(linha * sizeof(int*));
    for(int i = 0; i<linha; i++)
        matriz[i] = (int*) malloc(coluna * sizeof(int));
    return matriz;
}

void leitura(int **matriz, int linha, int coluna){
    for(int i = 0; i<linha; i++)
        for(int j = 0; j<coluna; j++){
            printf("valor que deseja colocar na matriz na posição [%d][%d]", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
}

int **multiplica(int **matrizA, int linhaA, int colunaA, int **matrizB, int linhaB, int colunaB){
    if(colunaA == linhaB){
        int **matriz = cria_matriz(colunaA, linhaB);
        
        for(int k=0; k<linhaA; k++){
            for(int i = 0; i<colunaB; i++){
                int aux = 0.0;
                for(int j = 0; j<colunaA; j++){
                    aux += (matrizA[k][j]*matrizB[j][i]);
                } matriz[k][i] = aux;
            }
        }
        
        return matriz;
    } else printf("Impossivel realizar esse produto\n");
}

void imprime(int **matriz, int linha, int coluna){
    for(int i = 0; i<linha; i++){
        printf("\n");
        for(int j = 0; j<coluna; j++){
            printf("%.2f\t", matriz[i][j]);
        }
    }
    printf("\n\n");
}

void desaloca(int ** matriz, int linha){
    for(int i = 0; i<linha; i++)
        free(matriz[i]);
    free(matriz);
}

int main(){

    int **m1 = aloca(2,3);
    leitura(m1,2,3);

    int **m2 = aloca(3,4);
    leitura(m2,3,4);

    int **m3 = multiplica(m1,2,3,m2,3,4);

    imprime(m1,2,3);
    imprime(m2,3,4);
    imprime(m3,2,4);

    desaloca(m1,2);
    desaloca(m2,3);
    desaloca(m3,2);

    return 0;
}