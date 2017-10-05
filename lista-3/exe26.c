#include <stdio.h>

int main(void) {

    int dia;

    printf("Digite um valor (1-6) correspondente a um dia da semana: ");
    scanf("%d", &dia);

    switch (dia) {
    case (0):
        printf("Domingo");
        break;
    case (1):
        printf("Segunda\n");
        break;
    case (2):
        printf("Terça\n");
        break;
    case (3):
        printf("Quarta\n");
        break;
    case (4):
        printf("Quinta\n");
        break;
    case (5):
        printf("Sexta\n");
        break;
    case (6):
        printf("Sábado\n");
        break;

    default:
        printf("Dia inválido\n");
    }
    return 0;
}