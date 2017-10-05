#include <stdio.h>

int main() {
	float num1, num2, media;

	printf("Informe a nota 1: ");
	scanf("%f", &num1);

	printf("Informe a nota 2: ");
	scanf("%f", &num2);

	media = (num1 * 0.4) + (num2 * 0.6);

	if (media >= 9) {
		printf("Nota A");
	} else if (media >= 7.5) {
		printf ("Nota B");
	} else if (media >= 6) {
		printf ("Nota C");
	} else if (media >= 4) {
		printf ("Nota D");
	} else {
		printf("Nota E");
	}
}