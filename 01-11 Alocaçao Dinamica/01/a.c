#include <stdlib.h>

#define MAX 5

int main(){

    int *array;

    array = malloc(MAX * sizeof(int));
    if(array == NULL) exit(-1);

    for(int i = 0; i < MAX; i++){
        printf("array [%d]", i+1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < MAX; i++){
        printf("array [%d] - %d\n", i+1, array[i]);
    }

    free(array);
    return 0;
}