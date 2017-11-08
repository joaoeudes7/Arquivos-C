#include <stdio.h>

int main(void) {

    int mes;

    printf("Digite um valor (1-12) correspondente a um mês do ano: ");
    scanf("%d", &mes);

    switch (mes) {
    case (1):
    case (2):
    case (3):
        printf("Primeiro trimestre\n");
        break;
    case (4):
    case (5):
    case (6):
        printf("Segundo trimestre\n");
        break;
    case (7):
    case (8):
    case (9):
        printf("Terceiro trimestre\n");
        break;
    case (10):
    case (11):
    case (12):
        printf("Quarto trimestre\n");
        break;
    default:
        printf("Mês inválido\n");
    }
    return 0;
}