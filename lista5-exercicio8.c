#include <stdio.h>
#include <string.h>

_Bool stringsIguais(char s1[], char s2[]);
int stringContida(char s1[], char s2[]);

int main(void)
{
    char s1[20];
    char s2[20];

    printf("Digite uma string: ");
    scanf("%s", s1);

    printf("Digite outra string: ");
    scanf("%s", s2);

    if (stringsIguais(s1, s2))
    {
        printf("Strings iguais\n");
    }
    else
    {
        printf("Strings diferentes\n");
    }

    if (stringContida(s1, s2))
    {
        printf("String 2 e a sub string da primeira\n");
    }
    else
    {
        printf("String 1 nao e a sub string da primeira\n");
    }
}

_Bool stringsIguais(char s1[], char s2[])
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        ++i;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        return 1; // retorna verdadeiro caso as strings sejam iguais
    }
    else
    {
        return 0; // retorna que as duas strings não são iguais
    }
}

int stringContida(char s1[], char s2[])
{

    int cont = 0;
    for (int i = 0; s2[i] != '\0'; i++)
    {

        int achou = 1;

        for (int j = 0; s1[j] != '\0'; j++)
        {

            if (s2[i + j] != s1[j])
            {
                achou = 0;
                break;
            }
        }
        if (achou)
        {
            cont++;
        }
    }

    return cont;
}
