#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(){
    srand((unsigned)time(NULL));
    int aleatorio;
    int vetor[TAM], *p1 = vetor, *p2 = vetor, cont1 = 0, cont2 = 9, i;
    printf("O vetor eh igual a: ");
    for(i=0;i<TAM;i++){
        aleatorio = rand() % 30;
        vetor[i] = aleatorio;
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("\n");
    printf("Iremos percorrer o vetor por dois ponteiros um comecando do inicio do vetor e outro do final e parando no meio\n");
    printf("\nDo inicio: ");
    for(i=0;i<TAM/2;i++){
        printf("%d ", *(p1+cont1));
        cont1 = cont1 + 1;
    }
    printf("\n");
    printf("\nDo final: ");
    for(i=0;i<TAM/2;i++){
        printf("%d ", *(p2+cont2));
        cont2 = cont2 - 1;
    }
    printf("\n");
    return 0 ;
}
