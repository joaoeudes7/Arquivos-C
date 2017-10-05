#include <stdio.h>

int main (void) {
	float altura, ideal;
	char sexo;

	printf("Digite seu sexo (M ou F): ");
	scanf("%c", &sexo);

	printf("Digite a sua altura em metros: ");
	scanf("%f", &altura);

	if ((sexo == 'm') || (sexo == 'M')) {
		ideal = ((72.2 * altura) - 58.0);
		printf("O seu peso ideal é: %.2f", ideal);
	}
	else if ((sexo == 'f') || (sexo == 'F')) {
		ideal = ((62.1 * altura) - 44.7);
		printf("O seu peso ideal é: %.2f", ideal);
	}

	return 0;
}