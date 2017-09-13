#include <stdio.h>

int main() {
	int num, num2;

	printf("Digite um numero real: ");
	while (num <= 0) {
		scanf("%d", &num);
	}
	printf("Digite outro numero real: ");
	while (num2 <= 0) {
		scanf("%d", &num2);
	}
	return 0;
}
