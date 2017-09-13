#include <stdio.h>

int main (void) {

	float peso, altura, imc;

	printf("Digite seu peso: ");
	scanf("%f", &peso);

	printf("Digite a sua altura em metros: ");
	scanf("%f", &altura);

	imc = peso / (altura * altura);
	if (imc < 18.5) {
		printf("Você está abixo do peso ideal");
	}
	else if ((imc > 18.5) && (imc <= 24.9)) {
		printf("Peso normal");
	}
	else if ((imc >= 25.0) && (imc <= 29.9)) {
		printf("Você está acima do peso");
	}
	else if ((imc >= 30.0) && (imc <= 34.9)) {
		printf("Obesidade grau I");
	}
	else if ((imc >= 35.0) && (imc <= 39.9)) {
		printf("Obesidade grau II");
	}
	else {
		printf("Obesidade grau III");
	}

	return 0;
}