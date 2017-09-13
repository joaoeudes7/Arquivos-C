#include <stdio.h>

int main (void) {

	int n, d;
	printf("Informe o número de vertices do poligono: ");
	scanf("%d", &n);

	if (n >= 3) {
		d = (n * (n - 3)) / 2;
		printf("O número de diagonais é %d", d);
	} else {
		printf("Não é possivel realizar o calculo");
	}


}