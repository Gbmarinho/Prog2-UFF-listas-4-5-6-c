#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int *repeticao(int *vet, int tam, int *n){
    int *copia, *copia2, cont =0, contador = 0, i , j,  *numRepetido;
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
            *n = *n + 1;
            cont = 0;
        }
        cont = 0;
    }
    printf("O vetor eh: ");
    for(i=0;i<tam;i++){
        printf("%d|", vet[i]);
    }
    numRepetido = (int*) malloc(*n * sizeof(int));
    if(numRepetido == NULL){
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
            numRepetido[contador] = vet[i];
            contador++;
        }
        cont = 0;
    }
    return numRepetido;
}

int main(){
    int tam, i, *vetor, aleatorio, *numRepetidos, n = 0;
    srand((unsigned)time(NULL));
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vetor = (int*) malloc(tam * sizeof(int));
    if(vetor == NULL){
        exit(1);
    }
    for(i=0;i<tam;i++){
        aleatorio = rand() % 10;
        vetor[i] = aleatorio;
    }
    numRepetidos = repeticao(vetor, tam, &n);
    printf("\nNumeros repetidos: ");
    for(i=0;i<n;i++){
        printf("%d, ", numRepetidos[i]);
    }


    free(vetor);
    return 0;
}
