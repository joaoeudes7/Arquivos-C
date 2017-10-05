#include <stdio.h>

int main (void) {

	float salario, imposto, salariofinal;

	printf("Digite o sálario ex. 985.00: ");
	scanf("%f", &salario);

	if (salario <= 1434.59) {
		imposto = salario * 0.000;
		salariofinal = salario - imposto;
	}
	else if ((salario >= 1434.60 ) && (salario <= 2150.00)) {
		imposto = salario * 0.075;
		salariofinal = salario - imposto;
	}
	else if ((salario >= 2150.01 ) && (salario <= 2866.70)) {
		imposto = salario * 0.015;
		salariofinal = salario - imposto;
	}
	else if ((salario >= 2866.71) && (salario <= 3582.00)) {
		imposto = salario * 0.0225;
		salariofinal = salario - imposto;
	}
	else if (salario >= 3582.01) {
		imposto = salario * 0.0275;
		salariofinal = salario - imposto;
	}
	printf (">> Imposto: %.2f \n>> Salario Líquido: %.2f\n", imposto, salariofinal);


return 0;
}