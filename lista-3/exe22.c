#include <stdio.h>

int main (void) {
	int x;

	printf("Digite u numero inteiro: ");
	scanf("%d", &x);

	printf("Gerou o numero primo: %d \n", x * x + x + 41);

	return 0;
}