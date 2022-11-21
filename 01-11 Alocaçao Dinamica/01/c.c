#include <stdlib.h>

typedef struct pontos{
    int x, y;
}Pontos;

int main(){

    int n;
    scanf("%d", &n);
    Pontos *array;
    array = malloc(n * sizeof(Pontos));

    for(int i=0; i<n; i++){
        scanf("%d %d", &array[i].x, &array[i].y);
    }
    for(int i=0; i<n; i++){
        printf("x %d ---- y %d\n", array[i].x, array[i].y);
    }

    free(array);
    return 0;
}