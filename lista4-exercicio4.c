#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int testa_PA(int n, int* v){
    int resu, i, r;
    resu = v[0]-v[1];
    for(i=0;i<4;i++){
        if(v[i]-v[i+1] != resu){
            return 0;
            break;
        }
    }
    r = v[1]-v[0];
    return r;
}



int main(){
    int vetor[TAM], i, teste;
    printf("Digite 5 numeros e veremos se eh uma PA\n");
    for(i=0;i<5;i++){
        printf("Digite o numero da posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    teste = testa_PA(TAM, vetor);
    printf("\n");
    printf("O resultado foi: %d\n", teste);
    printf("\n");
    return 0;
}
