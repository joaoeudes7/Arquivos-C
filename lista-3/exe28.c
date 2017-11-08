#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("É divisível por 2");
    }
    if (num % 3 == 0) {
        printf("É divisível por 3");
    }
    if (num % 4 == 0) {
        printf("É divisível por 4");
    }
    if (num % 5 == 0) {
        printf("É divisível por 5");
    }
    if (num % 6 == 0) {
        printf("É divisível por 6");
    }
    if (num % 7 == 0) {
        printf("É divisível por 7");
    }
    if (num % 8 == 0) {
        printf("É divisível por 8");
    }
    if (num % 9 == 0) {
        printf("É divisível por 9");
    }
    return 0;
}
