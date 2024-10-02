#include <stdio.h>

int main() {
    int numero1;
    int numero2;

    printf("Olá usuário!\n");

    printf("Digite um número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &numero2);

    int multiplicacao = numero1 * numero2;

    printf("O resultado da multiplicação entre os números %d e %d é: %d\n", numero1, numero2, multiplicacao);
}