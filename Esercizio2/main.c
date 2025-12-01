#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){
    int n;
    printf("Inserisci n: ");
    scanf("%d",&n);

    FILE *fp=fopen("output.txt","w");
    fprintf(fp,"VECCHI VALORI NELL'ARRAY: \n");
    printf("Vecchio array: \n");
    int *array=malloc(n*sizeof(int));
    srand(time(NULL));
    for(int i=0;i<n;i++){
        array[i]=rand()%100;
        printf("[%d] = %d \n",i,array[i]);
        fprintf(fp,"[%d]",array[i]);
    }
    fprintf(fp,"\n");

    printf("Nuovo array: \n");
    free(array);
    fprintf(fp,"NUOVI VALORI NELL'ARRAY: \n");
    for(int i=0;i<n;i++){
        printf("[%d] = %d \n",i,array[i]);
        fprintf(fp,"[%d]",array[i]);
    }
    fclose(fp);

    return 0;
}