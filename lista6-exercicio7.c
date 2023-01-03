#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void repeticao(int *vet, int tam){
    int *copia, *copia2, cont =0, contador = 0, i , j, quantos = 0, *numRepetidos;
    copia = (int*) malloc(tam * sizeof(int));
    if(copia == NULL){
        exit(1);
    }
    copia2 = (int*) malloc(tam * sizeof(int));
    if(copia2 == NULL){
        exit(1);
    }
    for(i=0;i<tam;i++){
        copia[i] = vet[i];
        copia2[i] = vet[i];
    }
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(vet[i] == copia[j]){
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
    for(i=0;i<tam;i++){
        printf("%d|", vet[i]);
    }
    numRepetidos = (int*) malloc(quantos * sizeof(int));
    if(numRepetidos == NULL){
        exit(1);
    }
    cont = 0;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(vet[i] == copia2[j]){
                copia[j] = 999;
                cont = cont + 1;
            }
        }
        if(cont >= 2){
            numRepetidos[contador] = vet[i];
            contador++;
        }
        cont = 0;
    }
    printf("\nNumeros repetidos: ");
    for(i=0;i<quantos;i++){
        printf("%d, ", numRepetidos[i]);
    }
}

int main(){
    int n, i, *vetor, aleatorio;
    srand((unsigned)time(NULL));
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vetor = (int*) malloc(n * sizeof(int));
    if(vetor == NULL){
        exit(1);
    }
    for(i=0;i<n;i++){
        aleatorio = rand() % 10;
        vetor[i] = aleatorio;
    }
    repeticao(vetor, n);


    free(vetor);
    return 0;
}
