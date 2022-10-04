#include <stdio.h>
#include <limits.h>
#define TAMANHO 10

int main(){
    int vetor[TAMANHO];
    for(int i = 0; i < TAMANHO; i++)
        scanf("%d", &vetor[i]); 
    
    
    void mostra_valor(int vetor[]){
        for(int i = 0; i < TAMANHO; i++){
            printf("%d\n", vetor[i]);
        }
    }

    int maior_valor(int vetor[]){
        int aux = INT_MIN;
        for(int i = 0; i < TAMANHO; i++){
            if(vetor[i] > aux){
                aux = vetor[i];
            }
        }
        printf("%d\n", aux);
        return aux;
    }

    int dois_maiores_valores(int vetor[]){
        int aux = INT_MIN;
        int maior = maior_valor(vetor);
        for(int i = 0; i < TAMANHO; i++){
            if(vetor[i] > aux && vetor[i] != maior){
                aux = vetor[i];
            }
        }
        printf("%d\n", aux);
        return 0;
    }

    int existe_valores_iguais(int vetor[]){
        for(int i = 0; i < TAMANHO; i++){
            for(int j = i+1; j < TAMANHO; j++){
                if(vetor[i] == vetor[j]){
                    return 1;
                }
            }
        }
        return 0;
    }

    void ordem_inversa(int vetor[]){
        for(int i = TAMANHO-1; i >=0 ; i--){
            printf("%d\n", vetor[i]);
        }
    }

    int numero_elementos_impar(int vetor[]){
        int contador = 0;
        for(int i = 0; i < TAMANHO; i++){
            if(vetor[i] % 2 != 0) contador++;
        }
        return contador;
    }

    return 0;
}