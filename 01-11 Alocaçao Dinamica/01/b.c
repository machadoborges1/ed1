#include <stdlib.h>

int main(){

    int *array, size, impar = 0, par = 0;
    printf("Inteiros: ");
    scanf("%d", &size);
    array = malloc(size * sizeof(int));

    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    printf("Lidos: %d\n", size);

    for(int i = 0; i < size; i++){
        printf("%d - %d\n", i, *array+i);
        if(array[i]%2==0) par++;
        else impar++;
    }

    free(array);

    printf("%d - %d", impar, par);
    
    return 0;
}