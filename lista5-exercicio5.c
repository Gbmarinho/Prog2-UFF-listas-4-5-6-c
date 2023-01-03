#include<stdio.h>
#include<string.h>



void main(void)
{
    char frase[80]="o rato roeu a roupa do rei de roma";
    char *p;
    p = frase;
    p[2]='m';
    p[6]='\0';
    printf("%s\n", frase);// trocamos o r por m e a frase termina do caracter 6
    p = p + 3;//faz o começo de p ser 3 pra frente
    printf("%s\n",p);
    printf("%d\n",strlen(frase));//ja que o ponteiro trocou o[6] por '\0' temos 'o mato' q tem 5 caracteres + '\0' == 6 caracteres
}
