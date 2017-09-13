#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int num;
	int raiz;
	printf("Digite um número para que possamos calcular a raiz quadrada do mesmo\n");
	scanf("%d", & num);
	raiz = sqrt(num);
	if (fmod(sqrt(num), 1) == 0) {
		printf("A raiz quadrada de %d é %d", num, raiz);
	} else {
		printf("O número %d não possui raiz quadrada exata", num);
	}
	return 0;
}
