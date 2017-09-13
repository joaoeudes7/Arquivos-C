#include <stdio.h>


int main (void) {
	float aux, nota1, nota2, nota3, media, maior, meio;

	printf("Informe as três notas ex:. 5.0,8.0,7.5: ");
	scanf("%f,%f,%f", &nota1, &nota2, &nota3);

	media = (float) (nota1 + nota2 + nota3) / 3.0;

	if (nota1 > nota2 && nota1 > nota3) {
		maior = nota1;
		if (nota2 > nota3) {
			meio = nota2;
		} else {
			meio = nota3;
		}
	} else if (nota2 > nota3) {
		maior = nota2;
		if (nota3 > nota1) {
			meio = nota3;
		} else {
			meio = nota1;
		}
	} else {
		maior = nota3;
		if (nota2 > nota1) {
			meio = nota2;
		} else {
			meio = nota1;
		}
	}

	if (media >= 7.0) printf("Você está Aprovado!");
	else if ((nota1 >= 3.0 && nota2 >= 3.0 && nota3 >= 3.0) && (media >= 5.0)) {
		printf("Você está Aprovado!");
	}
	else if (nota1 < 3.0 && nota2 + nota3 >= 10.0) {
		aux = 15.0 - (maior + meio);
		printf("Você está na reposição e precisa de %f pontos!", aux);
	}
	else if (nota2 < 3.0 && nota3 + nota1 >= 10.0) {
		aux = 15.0 - (maior + meio);
		printf("Você está na reposição e precisa de %f pontos!", aux);
	}
	else if (nota3 < 3.0 && nota2 + nota1 >= 10.0) {
		aux = 15.0 - (maior + meio);
		printf("Você está na reposição e precisa de %f pontos!", aux);
	}
	else if ((nota1 < 3.0 && nota2 < 3.0) || (nota1 < 3.0 && nota3 < 3.0) || (nota2 < 3.0 && nota3 < 3.0)) {
		printf("Você está Reprovado direto");
	} else {
		printf("Você está Reprovado!");
	}
	printf("\n");



}
