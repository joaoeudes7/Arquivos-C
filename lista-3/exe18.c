#include <stdio.h>

int main(void) {
	int a, b;

	printf("Digite o valor de AB: ");
	scanf("%d", &a);

	printf("Digite o valor de B: ");
	scanf("%d", &b);

	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("Valor de A = %d \nValor de B = %d\n", a, b);
}