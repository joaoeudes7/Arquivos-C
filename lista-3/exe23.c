#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int dado1, dado2, soma;
    srand((unsigned)time(NULL));

    soma += 1 + (rand() % 6);
    soma += 1 + (rand() % 6);

    printf("O resultado foi: %d", soma);

    if (soma == 7 || soma == 11) {
        printf("\nJogador ganhou!\n");
    } else {
        printf("\nO CPU ganhou\n");
    }
    return 0;
}

