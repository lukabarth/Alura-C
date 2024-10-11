#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    srand(time(0));
    int numeroSecreto = rand() % 100;

    int chute;
    int acertou;
    int nivel;
    int totalTentativas;

    double pontos = 1000;

    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");

    scanf("%d", &nivel);

    int numeroDeTentativas;

    switch(nivel) {
        case 1:
            numeroDeTentativas = 20;
            break;
        case 2:
            numeroDeTentativas = 15;
            break;
        default:
            numeroDeTentativas = 6;
            break;
    }

    for(int i = 1; i <= numeroDeTentativas; i++) {

        printf("Tentativa %d\n", totalTentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode digitar números negativos!\n");
            continue;
        }

        acertou = chute == numeroSecreto;
        
        if(acertou) {
            break;
        } 
        
        else if (chute > numeroSecreto) {
            printf("Seu chute foi maior que o número secreto\n\n");
        }
        
        else {
            printf("Seu chute foi menor que o número secreto\n\n");
        }

        totalTentativas++;

        double pontosPerdidos = abs(chute - numeroSecreto) / (double)2;

        pontos -= pontosPerdidos;
    }

    printf("Fim de jogo!\n");

    if(acertou) {
        printf("Você ganhou!\n");
        printf("Você acertou em %d tentativas!\n", totalTentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else {
        printf("\n\n");
        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");

        printf("\nVocê perdeu! Tente novamente!\n\n");
    }
}