#include<stdio.h>
#include<string.h>
void main(void){
    char texto[]= "foi muito facil";
    int i;
    for (i = 0; texto[i]!='\0'; i++){
        if (texto[i] == ' ') break;
    }
    i++;
    for ( ; texto[i]!='\0'; i++){
        printf("%c", texto[i]);
    }
}
