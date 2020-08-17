#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;

    printf("Ola! Qual seu nome?\n");
    scanf("%s",&nome);

    printf("\nQual sua idade, %s?\n", nome);
    scanf("%d",&idade);

    printf("\nAguarde enquanto lemos seus dados...\n");

    printf("\nNome: %s \nIdade: %d\n",nome ,idade);

    printf("\nA primeira letra do seu nome e: %c\n", nome[0]);

    if (idade >= 18){
        printf("\n%s e um(a) adulto(a)!\n", nome);
    }
    else if (idade >= 12){
        printf("\n%s e um(a) adolescente!\n", nome);
    }
    else {
        printf("\n%s e um(a) crianca!\n", nome);
    }

    return 0;
}
