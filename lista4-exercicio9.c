#include <stdio.h>
#include <stdlib.h>

void armazenando(int *vetor){
    int i;
    printf("Digite 7 numeros para serem armazenados: \n");
    for(i=0;i<7;i++){
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void listando(int *vetor){
    int i;
    for(i=0;i<7;i++){
        printf("O numero da posicao %d: %d\n", i, vetor[i]);
    }
}
int ver(int x, int *vetor){
    int i;
    for(i=0;i<7;i++){
        if(x==vetor[i]){
            return x;
        }
    }
    return -1;
}
void aumentaVetor(int *vetorVelho, int *vetorNovo){
    int i;
    vetorNovo[0] = vetorVelho[0];
    for(i=1; i<7;i++){
        vetorNovo[i] = vetorVelho[i]+vetorNovo[i-1];
    }
}

void printaVetor(int *vetor){
    int i;
    printf("O vetor eh: [");
    for(i=0;i<7;i++){
        printf("%d ",vetor[i]);
    }
    printf("]");

}

int main(){
    int vetor[7], verifica, v, newVetor[7];
    armazenando(vetor);
    listando(vetor);
    printf("Digite um numero para verificar se ele esta dentro do vetor: ");
    scanf("%d", &verifica);
    v = ver(verifica, vetor);
    if(v==verifica){
        printf("\nO numero foi encontrado dentro do vetor!");
    }else{
        printf("\nO numero digitado nao esta dentro do vetor.");
    }
    aumentaVetor(vetor, newVetor);
    printf("\n");
    printf("Vetor velho: ");
    printf("\n");
    printaVetor(vetor);
    printf("\n");
    printf("Vetor novo: ");
    printf("\n");
    printaVetor(newVetor);
    printf("\n");

    return 0;
}
