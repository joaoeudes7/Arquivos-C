#include <stdio.h>
#include <math.h>

int main (void) {
	float largura, comprimento, diagonal;

	printf("Digite a largura da casa: ");
	scanf("%f", &largura);

	printf("Digite o comprimentoprimento da casa: ");
	scanf("%f", &comprimento);

	diagonal = sqrt(largura * largura + comprimento * comprimento);
	printf("O tamanho da diagonal é: %.1f\n", diagonal);
	
	return 0;
}