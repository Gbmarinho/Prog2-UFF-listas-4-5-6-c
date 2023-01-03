#include <stdio.h>
#include <stdlib.h>

void calcula_corrida(float dist, float *b1, float *b2){
    float band1 = 2.5, band2 = 3.0;
    *b1 = 4.95 + (band1*dist);
    *b2 = 4.95 + (band2*dist);
}

int main(){
    float bandeira1, bandeira2;
    float distancia;
    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);
    calcula_corrida(distancia, &bandeira1, &bandeira2);
    printf("O valor a ser pago na bandeira 1 eh de R$%.2f\n", bandeira1);
    printf("O valor a ser pago na bandeira 2 eh de R$%.2f\n", bandeira2);
       //a tarifa inicial(ou bandeirada) custa R$4,95.
    //para cada quilômetro percorrido são cobrados mais R$2,50, na bandeira 1, ou R$3,00, na bandeira 2.
    return 0;
}
