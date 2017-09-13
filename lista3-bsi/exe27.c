#include <stdio.h>

int main() {
    int num1, num2;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0) {
        printf("%d é divisível por %d\n", num1, num2);
    } else if (num2 % num1 == 0) {
        printf("%d é divisível por %d\n", num2, num1);
    } else {
        printf("Não são divisíveis!\n");
    }
    return 0;
}
