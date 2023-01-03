#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *aprovados(int n, int *mat, float *notas, int *tam){
    int i, *matriculasApr, cont = 0;
    for(i=0;i<n;i++){
        if(notas[i]>= 5.0){
            *tam = *tam + 1;
        }
    }
    matriculasApr = (int *) malloc(*tam * sizeof(int));
    if(matriculasApr==NULL){
        exit(1);
    }
    for(i=0;i<n;i++){
        if(notas[i]>= 5.0){
            matriculasApr[cont] = mat[i];
            cont++;
        }
    }
    return matriculasApr;
}


int main(){
    int n, *matriculas, i, tam = 0, *apr;
    float *notas;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    matriculas = (int*) malloc(n * sizeof(int));
    if(matriculas==NULL){
        exit(1);
    }
    notas = (float*) malloc(n * sizeof(float));
    if(notas==NULL){
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Digite o numero da matricula do aluno: ");
        scanf("%d", &matriculas[i]);
        fflush(stdin);
        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[i]);
        fflush(stdin);
    }
    apr = aprovados(n, matriculas, notas, &tam);
    printf("Matriculas das pessoas que passaram: ");
    for(i=0;i<tam;i++){
        printf("%d ", apr[i]);
    }
    printf("\n");
    free(matriculas);
    free(notas);
    return 0;
}
