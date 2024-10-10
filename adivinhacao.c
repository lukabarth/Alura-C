#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("*******************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;

    int chute;
    int tentativas = 1;

    double pontos = 1000;
    int novosPontos = pontos * 2;

    while (1) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode digitar números negativos!\n");
            continue;
        }

        int acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;
        
        if(acertou) {
            printf("Parabéns! Você acertou!\n");

            break;
        } 
        
        else if (maior) {
            printf("Seu chute foi maior que o número secreto\n");
        }
        
        else {
            printf("Seu chute foi menor que o número secreto\n");
        }

        tentativas++;

        double pontosPerdidos = abs(chute - numeroSecreto) / (double)2;

        pontos -= pontosPerdidos;
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);
}