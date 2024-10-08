# Curso: Conhecendo a linguagem das linguagens
---

**Nesse readme terá minhas anotações durante esse curso da alura.**


Para compilar um programa em C digite no terminal o seguinte comando:
```C
gcc nomeDoArquivo.c -o nomeDoProgramaCompilado.out
```

Após isso, digite o seguinte comando para rodar o programa:
```C
./programa.out
```
---
Para declarar uma constante, use a diretiva #define no topo do código, logo abaixo do #include <stdio.h>
```C
#define NOME_DA_CONSTANTE valorDaVariavel
```
---

## Tipos
#### Numéricos
**Inteiros**
- short - 2 bytes
- int - 4 bytes
- long - 8 bytes

**Números com ponto flutuante**
- double - 8 bytes
- float - 4 bytes

---

Para printar uma variável que contém um número inteiro:
```C
printf("%d", nomeDaVariavel);
```

Para printar uma variável que contém um número com ponto flutuante:
```C
printf("%f", nomeDaVariavel);
```

E para controlar a quantidade de casas decimais:
```C
printf("%.1f", nomeDaVariavel);
```

Para ler uma variável:
```C
scanf("%d", &nomeDaVariavel);
```

> No momento não será abordado do porque do "&" antes da variável no momento de leitura, mas é importante sempre colocá-lo.
---

## Casting
Quando queremos que uma variável de um tipo se transforme em outro para realizar alguma operação, podemos fazer o **casting**, ou podemos chamar também de **conversão de tipo**:
```C
#include <stdio.h>

int main() {
    int a = 3;
    int b = 2;

    double pontos = (double)a / (double)b;
    printf("%f\n", pontos);
}
```