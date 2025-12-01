#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){
    int n;
    printf("Inserisci n: ");
    scanf("%d",&n);

    printf("Vecchio array: \n");
    int *array=malloc(n*sizeof(int));
    srand(time(NULL));
    for(int i=0;i<n;i++){
        array[n]=rand()%100;
        printf("[%d] = %d \n",i,array[n]);
    }

    printf("Nuovo array: \n");
    free(array);
    for(int i=0;i<n;i++){
        printf("[%d] = %d \n",i,array[n]);
    }

    return 0;
}