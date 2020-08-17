#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Jogo: Pedra, Papel ou Tesoura!

    char jogador1[256];
    char jogador2[256];

    printf("Jogador 1, sua vez: ");
    scanf("%s", &jogador1);

    printf("\nJogador 2, sua vez: ");
    scanf("%s", &jogador2);

    printf("\nAguarde, estamos calculando o resultado...\n");

    if(strcmp(jogador1, "papel") == 0){

            if(strcmp(jogador2, "papel") == 0){
                printf("\nJogador 1 e Jogador 2 empataram!\n");
            }
            else if(strcmp(jogador2, "tesoura") == 0){
                printf("\nJogador 2 venceu o Jogador 1, pois a tesoura corta o papel!\n!");
            }
            else if(strcmp(jogador2, "pedra") == 0){
                printf("\nJogador 1 venceu o Jogador 2, pois o papel embrulha a pedra!\n");
            }
            else{
                printf("\nERROR! Jogador 2 deu uma informacao invalida.\n");
            }

    }

    else if(strcmp(jogador1, "tesoura") == 0){

            if(strcmp(jogador2, "papel") == 0){
                printf("\nJogador 1 venceu o Jogador 2, pois a tesoura corta o papel!\n!");
            }
            else if(strcmp(jogador2, "tesoura") == 0){
                printf("\nJogador 1 e Jogador 2 empataram!\n");
            }
            else if(strcmp(jogador2, "pedra") == 0){
                printf("\nJogador 2 venceu o Jogador 1, pois a pedra quebra a tesoura!\n");
            }
            else{
                printf("\nERROR! Jogador 2 deu uma informacao invalida.\n");
            }

    }

    else if(strcmp(jogador1, "pedra") == 0){

            if(strcmp(jogador2, "papel") == 0){
                printf("\nJogador 2 venceu o Jogador 1, pois o papel embrulha a pedra!\n");
            }
            else if(strcmp(jogador2, "tesoura") == 0){
                printf("\nJogador 1 venceu o Jogador 2, pois a pedra quebra a tesoura!\n");
            }
            else if(strcmp(jogador2, "pedra") == 0){
                printf("\nJogador 1 e Jogador 2 empataram!\n");
            }
            else{
                printf("\nERROR! Jogador 2 deu uma informacao invalida.\n");
            }

    }

    else{
        printf("\nERROR! Jogador 1 deu uma informacao invalida.\n");
    }


    return 0;
}
