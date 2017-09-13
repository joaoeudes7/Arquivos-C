#include <stdio.h>

int main(void) {
	int idade;
	char sexo;

	printf("Digite seu sexo (M ou F): ");
	scanf("%c", &sexo);

	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	if ((sexo == 'm') || (sexo == 'M')) {
		if (idade < 16) {
			printf("Você não possui deveres\n");
		} else if (idade >= 16) {
			printf("Você possui o direiro de voto ");
			if (idade < 18) {
				printf("facultativo\n");
			} else if (idade >= 18 && idade < 70) {
				printf("obrigatório, tem o direito de dirigir e pode ser preso\n");
			} else {
				printf("facultativo, direito de dirigir e pode ser preso\n");
			}
		}
	} else {
		if (idade < 16) {
			printf("Você não possui deveres\n");
		} else if (idade >= 16) {
			printf("Você possui o direiro de voto ");
			if (idade < 18) {
				printf("facultativo\n");
			} else if (idade >= 18 && idade < 70) {
				printf("obrigatório, tem o direito de dirigir e pode ser preso\n");
			} else {
				printf("facultativo, tem o direito de dirigir\n");
			}
		}
	}
}