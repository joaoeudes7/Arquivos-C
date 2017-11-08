#include <stdio.h>

int main() {
	printf("Digite um número:\n");
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("O Número é par");
	} else {
		printf("O número é impar");
	}
	return 0;
}
