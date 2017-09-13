#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, num3;
    printf("Digite três numeros (2,1,4): ");
    scanf("%d,%d,%d", &num1, &num2, &num3);

    if (num1 > 0) {
        printf("%f \n", sqrt(num1));
    } else {
        printf("%f \n", pow(num1, 2));
    }

    if ((num2 > 10) && (num2 < 100)) {
        printf("Número está entre 10 e 100 – intervalo permitido \n");
    }

    if (num3 < num2) {
        printf("Diferença de %d \n", (int) (num2 - num3) * -1);
    }
    return 0;
}
