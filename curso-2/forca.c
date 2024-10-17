#include <stdio.h>
#include <string.h>

char palavraSecreta[20];
char chutes[26];
int tentativas = 0;

void abertura() {
    printf("*********************\n");
    printf("*   Jogo da forca  *\n");
    printf("*********************\n\n");
}

void chuta(char chutes[26], int tentativas) {
    char chute;
    scanf(" %c", &chute);

    chutes[tentativas] = chute;
}

int jaChutou(char letra) {
    int achou = 0;
    for(int j = 0; j < tentativas; j++) {
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }

    return achou;
}

void desenhaForca() {

    printf("Você já deu %d chutes\n", tentativas);

    for(int i = 0; i < strlen(palavraSecreta); i++) {

        if(jachutou(palavraSecreta[i])) {
            printf("%c ", palavraSecreta[i]);
        } else {
            printf("_ ");
        }

    }
    printf("\n");

}

void escolhepalavra() {
    sprintf(palavraSecreta, "MELANCIA");
}

int main() {
    char palavraSecreta[20];

    sprintf(palavraSecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    abertura();

    int acertou = 0;
    int enforcou = 0;

    abertura();
    escolhepalavra();

    do {

        desenhaforca();
        chuta();

        tentativas++;

    

    } while(!acertou && !enforcou);
}