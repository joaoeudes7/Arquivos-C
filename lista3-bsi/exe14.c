#include <stdio.h>

int main (void) {

	float temp;
	printf("Informe a temperatura em °C: ");
	scanf("%f", &temp);

	printf("A temperatura %.1f°C em Fahrenheit é %.1f°F", temp, (temp * 9 / 5) + 32);
}