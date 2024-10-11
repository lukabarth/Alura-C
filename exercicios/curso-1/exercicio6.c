#include <stdio.h>

int main() {
    int numeroTabuada;

    printf("Digite um número inteiro para ter a tabuada: ");
    scanf("%d", &numeroTabuada);

    for(int i = 0; i <= 10; i++) {
        int resultadoTabuada = numeroTabuada * i;
        printf("%d x %d = %d\n", numeroTabuada, i, resultadoTabuada);
    }
}