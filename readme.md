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

Para printar uma variável que contém uma string:
```C
printf("%s", nomeDaVariavel);
```

Para printar uma variável que contém um char:
```C
printf("%c", nomeDaVariavel);
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
---
## Array
Para declarar um array:
```C
int notas[10];

// Um array de inteiros que armazena até 10 elementos
```
## Ponteiros
Ponteiros são variáveis que armazenam o endereço de memória de outra variável. Em vez de guardar diretamente um valor, um ponteiro guarda a localização onde esse valor está armazenado na memória.

Para declarar um ponteiro:
```C
int *ptr; // ponteiro para um inteiro
```

Para obter o endereço de uma variável:
```C
int var = 10;
ptr = &var; // ptr agora aponta para var
```

Para acessar o valor da variável apontada pelo ponteiro:
```C
printf("%d", *ptr); // imprime o valor de var, ou seja, 10
```

**Exemplo com ponteiro:**
```C
#include <stdio.h>

int main() {
    int var = 10;   // declarando uma variável
    int *ptr;       // declarando um ponteiro
    
    ptr = &var;     // ponteiro aponta para o endereço de var
    
    printf("Valor de var: %d\n", var);               // 10
    printf("Endereço de var: %p\n", &var);           // endereço de var
    printf("Valor armazenado no ponteiro: %p\n", ptr); // endereço de var
    printf("Valor apontado pelo ponteiro: %d\n", *ptr); // 10 (conteúdo de var)
}
```