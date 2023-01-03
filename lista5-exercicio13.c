#include <stdio.h>
#include <string.h>

main(){
    const char str[] = "Essa funcao aponta a primeira ocorrencia de um char escolhido";
    const char ch = 'a';
    char *ret;

    ret = strchr(str, ch);

    printf("String after |%c| is - |%s|\n\n\n", ch, ret);

    char str1[15];
       char str2[15];
       int resp;

       strcpy(str1, "abcdef");
       strcpy(str2, "ABCDEF");

       resp = strncmp(str1, str2, 4);

       if(resp < 0) {
          printf("eh menor que str2");
       } else if(resp > 0) {
          printf("str2 eh menor que str1");
       } else {
          printf("str1 eh igual a str2");
       }
       printf("\n\nEssa funcao compara os primeiros n bytes das duas strings e retorna 0, -1 ou 1 dependendo do resultado\n\n\n");

       int len;
       const char str3[] = "casamento";
       const char str4[] = "casa";

       len = strspn(str3, str4);

       printf("Retorna o numero de caracteres no segmento incial da primeira string que consiste em apenas caracteres da string 2 %d\n", len );



}
