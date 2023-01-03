#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int n, i, *vetor, aleatorio, cont = 0, quantos = 0, *copia, j, *numRepetidos, contador = 0, *copia2;
    srand((unsigned)time(NULL));
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vetor = (int*) malloc(n * sizeof(int));
    if(vetor == NULL){
        exit(1);
    }
    copia = (int*) malloc(n * sizeof(int));
    if(copia == NULL){
        exit(1);
    }
    copia2 = (int*) malloc(n * sizeof(int));
    if(copia2 == NULL){
        exit(1);
    }
    for(i=0;i<n;i++){
        aleatorio = rand() % 10;
        vetor[i] = aleatorio;
        copia[i] = aleatorio;
        copia2[i] = aleatorio;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(vetor[i] == copia[j]){
                copia[j] = 999;
                cont = cont + 1;
            }
        }
        if(cont >= 2){
            quantos = quantos + 1;
            cont = 0;
        }
        cont = 0;
    }
    printf("O vetor eh: ");
    for(i=0;i<n;i++){
        printf("%d|", vetor[i]);
    }
    numRepetidos = (int*) malloc(quantos * sizeof(int));
    if(numRepetidos == NULL){
        exit(1);
    }
    cont = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(vetor[i] == copia2[j]){
                copia[j] = 999;
                cont = cont + 1;
            }
        }
        if(cont >= 2){
            numRepetidos[contador] = vetor[i];
            contador++;
        }
        cont = 0;
    }
    printf("\nNumeros repetidos: ");
    for(i=0;i<quantos;i++){
        printf("%d|", numRepetidos[i]);
    }
    free(copia);
    free(copia2);
    free(numRepetidos);
    free(vetor);
    return 0;
}
