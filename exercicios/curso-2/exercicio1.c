#include <stdio.h>

void soma(int numeros[10]) {
    int total = 0;
    for(int i = 0; i < 10; i++) {
        total += numeros[i];
    }

    printf("O total é %d\n", total);
}

int main() {
    int numeros[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    soma(numeros);
}