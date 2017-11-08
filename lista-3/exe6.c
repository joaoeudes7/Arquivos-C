#include <stdio.h>

int main () {

	int num1, num2, num3, maior, menor;

	printf("Digite três números inteiros (1,2,3): ");
	scanf("%d,%d,%d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3) {
		maior = num1;
		if (num2 > num3) {
			menor = num3 ;
		} else {
			menor = num2;
		}
	} else if (num2 > num3) {
		maior = num2;
		if (num3 > num1) {
			menor = num1;
		} else {
			menor = num3;
		}
	} else {
		maior = num3;
		if (num2 > num1) {
			menor = num1;
		} else {
			menor = num2;
		}
	}

	printf("O maior número é %d e o menor é %d\n", maior, menor);
	return 0;
}

