#include <stdio.h>

int main () {
	int num1, num2, num3, maior, menor, meio, igual;
	printf("Digite três números (1, 2, 3): ");
	scanf("%d, %d, %d", &num1, &num2, &num3);


	if (num1 > num2 && num1 > num3) {
		maior = num1;
		if (num2 > num3) {
			menor = num3;
			meio = num2;
		} else {
			menor = num2;
			meio = num3;
		}
	} else if (num2 > num3) {
		maior = num2;
		if (num3 > num1) {
			menor = num1;
			meio = num3;
		} else {
			menor = num3;
			meio = num1;
		}
	} else {
		maior = num3;
		if (num2 > num1) {
			menor = num1;
			meio = num2;
		} else {
			menor = num2;
			meio = num1;
		}
	}

	printf("Os números em ordem crescente %d, %d, %d\n", menor, meio, maior);
	return 0;
}
