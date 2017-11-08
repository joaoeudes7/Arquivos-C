#include <stdio.h>
#include <math.h>
#include <locale.h>

void quest1() {
	for (int i = 1; i <= 100; i++) {
		printf("%d  ", i);
	}
}

void quest2() {
	for (int i = 1; i <= 100; i++) {
		if (!(i % 2)) {
			printf("%d  ", i);
		}
	}
}

void quest3() {
	int i;
	printf("Escolha um número de 1-99 iniciar\n>> ");
	scanf("%d", &i);

	for (i = i; i <= 100; i++) {
		printf("%d  ", i);
	}
}


void quest4() {
	int i = 50;
	while (i != 0) {
		printf("%d  ", i);
		i--;
	}
}

void quest5() {
	int lim, soma;
	int i = 1;
	printf("Quantos numeros ímpares quer somar?\n>> ");
	scanf("%d", &lim);

	while (lim != 0) {
		if (i % 2) {
			printf("%d  ", soma += i);
			lim -= 1;
		}
		i += 1;
	}
}

void quest6() {
	int lim, soma;
	int i = 1;
	printf("Quantos numeros ímpares quer somar?\n>> ");
	scanf("%d", &lim);

	while (lim != 0) {
		if (!(i % 2)) {
			printf("%d  ", soma += i);
			lim -= 1;
		}
		i += 1;
	}
}

void quest7() {
	for (int i = 100; i <= 200; i += 5) {
		printf("%d ", i);
	}
}

void quest8() {
	int a, b;
	while (a >= b || a <= 0 || b <= 0) {
		printf("Digite um valor de inicio (0 >)\n>>");
		scanf("%d", &a);
		printf("Digite um valor final (inicio >)\n>> ");
		scanf("%d", &b);
	}

	for (int i = a; i <= b; ++i) {
		if (!(i % 7)) {
			printf("%d ", i);
		}
	}
}

void quest9() {
	int nota, total, pessoas;

	printf("Quantas pessoas iram ser intrevistada? \n>> ");
	scanf("%d", &pessoas);

	for (int i = 0; i < pessoas; ++i) {
		printf("Digite a nota de avaliação de administração do seu município\n>> ");
		scanf("%d", &nota);
		total += nota;
	}
	printf("A média foi de votos da pesquisa foi: %d\n", total / pessoas);
}

void quest10() {
	int nota, total, pessoas, option = 1;

	while (option != 2) {
		switch (option) {
		case 1:
			printf("Digite a nota de avaliação de administração do seu município\n>> ");
			scanf("%d", &nota);
			pessoas++;
			total += nota;
			break;

		default:
			printf("Opção Inválida\n");
		}
		printf("\nExiste uma pessoa para entrevistar?");
		printf("\n1: Sim, 2: Não\n>> ");
		scanf("%d", &option);
	}
	printf("A média foi de votos da pesquisa foi: %d\n", total / pessoas);
}

void quest11() {
	int a = 0, b = 1, auxiliar;

	printf("%d\n", b);
	for (int i = 1; i <= 10; i++) {
		auxiliar = a + b;
		a = b;
		b = auxiliar;
		printf("%d\n", auxiliar);
	}
}

void quest12() {
	int a = 0, b = 1, auxiliar, n;

	printf("Digite um número:\n>> ");
	scanf("%d", &n);

	printf("%d ", b);
	for (int i = 1; i <= n; i++) {
		auxiliar = a + b;
		a = b;
		b = auxiliar;
		printf("%d ", auxiliar);
	}

}

void quest13() {
	int a = 0, b = 1, auxiliar, n;

	printf("Digite um número:\n>> ");
	scanf("%d", &n);

	printf("%d  ", b);
	for (int i = 1; i < n; i++) {
		auxiliar = a + b;
		a = b;
		b = auxiliar;
		if (auxiliar <= n)
			printf("%d  ", auxiliar);
	}

}

void quest14() {
	for (int i = 0; i <= 360; i += 15) {
		printf("[ %d ] = ", i);
		printf("Seno: %.2f; ", sin(i));
		printf("Cosseno: %.2f\n", cos(i));
	}
}

void quest15() {
	int num, mult;

	printf("Quantos múltiplos quer encontrar?\n>> ");
	scanf("%d", &num);
	printf("Qual múltiplo quer encontrar?\n>> ");
	scanf("%d", &mult);

	for (int i = 1; i <= num; ++i) {
		printf("%d\n", mult * i);
	}
}

void quest16() {
	int n;

	printf("Informe um valor:\n>> ");
	scanf("%d", &n);

	printf("Divisores de %d: ", n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			printf("%d  ", i);
	}
	printf("\n");
}

void quest17() {
	for (int i = 100; i <= 500; i++) {
		int cont = 0;
		for (int j = 1; j <= i; j++)
			if (i % j == 0)
				cont++;
		if (cont == 2)
			printf("%d é primo\n", i);
	}
}

void quest18() {
	int inicial, final;

	printf("Digite um número inicial: \n>> ");
	scanf("%d", &inicial);
	printf("Digite um número final: \n>> ");
	scanf("%d", &final);

	for (int i = inicial; i <= final; i++) {
		int cont = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				cont++;
		}
		if (cont == 2) {
			printf("%d é primo\n", i);
		}
	}

}

void quest19() {
	int a, b, voto, encerrar = 1;
	while (encerrar != 0) {
		printf("Candidato A - 15\nCandidato B - 55\n");

		printf(">> Digite seu voto de acordo com o número do candidato:\n>> ");
		scanf("%d", &voto);
		if (voto <= 55 && voto <= 15){
			if (voto == 15) {
				a += 1;
			} else {
				b += 1;
			}
			printf("Seu voto foi confirmado! Voto: %d\n", voto);
		} else {
			printf("Voto Inválido!\n");
		}
		printf("\nMais algum irá votar? (1- Sim, irei votar) (0- Não, Sair)\n>> ");
		scanf("%d", &encerrar);
	}

	printf("\n\nResultado da Urna:\nA: %d\nB: %d\n", a, b);
}

void quest20() {
	int a, b, c, x, lim;
	a = 0;
	printf("Digite o Valor de A:\n>> ");
	scanf("%d", &a);
	if (a == 0) {
		while (a == 0) {
			printf("É necessário que A seja diferente de 0!!\n");
			printf("Digite o Valor de A:\n>> ");
			scanf("%d", &a);
		}
	}
	printf("Digite o Valor de B:\n>> ");
	scanf("%d", &b);
	printf("Digite o Valor de C:\n>> ");
	scanf("%d", &c);

	printf("Defina o limite de X na função:\n>> ");
	scanf("%d", &lim);
	// f(x) = ax² + bx + c = 0
	for (x = 1; x <= lim; ++x) {
		printf("f(%d) = %dx%d² + %dx%d + %d = %.2f\n", x, a, x, b, x, c, (float) a * pow(x, 2) + b * x + c);
	}
}


int main() {

	int option = 1;
	setlocale(LC_ALL, "portuguese");

	printf("// UFRN - Progamação\n");
	printf("// Doscente: Alexandre\n");
	printf("// Discente: João Eudes\n\n");

	while (option != 0) {
		printf(" >> Menu\n");
		printf("  [1] - Questão 1\n");
		printf("  [2] - Questão 2\n");
		printf("  [3] - Questão 3\n");
		printf("  [4] - Questão 4\n");
		printf("  [5] - Questão 5\n");
		printf("  [6] - Questão 6\n");
		printf("  [7] - Questão 7\n");
		printf("    ..........\n");
		printf("  [18] - Questão 18\n");
		printf("  [19] - Questão 19\n");
		printf("  [20] - Questão 20\n\n");

		printf("\nQual questão deseja visualizar (0 p/ Sair)\n>> ");
		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("Escreva um programa em C que exiba na tela os números inteiros de 1 até 100.\n\n");
			quest1();
			break;
		case 2:
			printf("Escreva um programa em C que exiba os números inteiros pares compreendidos entre 1 e 100.\n\n");
			quest2();
			break;
		case 3:
			printf("Escreva um programa em C que exiba na tela os números inteiros de 1 até n, onde o valor de n é fornecido pelo usuário através do teclado.\n\n");
			quest3();
			break;
		case 4:
			printf("Escreva um programa em C que exiba na tela os números ímpares entre 50 e 1, iniciando em 50 e terminando em 1.\n\n");
			quest4();
			break;
		case 5:
			printf("Escreva um programa em C que calcule e imprima a soma dos n primeiros números naturais ímpares. O usuário do programa deve fornecer quantos números devem ser somados.\n\n");
			quest5();
			break;
		case 6:
			printf("Escreva um programa em C que calcule e imprima a soma dos n primeiros números naturais pares. O usuário do programa deve fornecer quantos números devem ser somados.\n\n");
			quest6();
			break;
		case 7:
			printf("Escreva um programa em C que exiba na tela os números inteiros múltiplos de 5, compreendidos entre 100 e 200.\n\n");
			quest7();
			break;
		case 8:
			printf("Escreva um programa em C que exiba na tela os números inteiros múltiplos de 7, compreendidos entre a e b , onde os valores de a e b são fornecidos pelo usuário.\n\n");
			quest8();
			break;
		case 9:
			printf("Escreva um programa em C que entreviste um grupo de n pessoas sobre a administração do seu município. Cada indivíduo deve fornecer uma nota entre 0 e 10 e ao final da entrevista, o programa deverá fornecer a nota média do grupo de pessoas.\n\n");
			quest9();
			break;
		case 10:
			printf("Modifique o programa anterior de forma que ele funcione para um grupo indeterminado de pessoas. Crie uma condição de parada para o programa.\n\n");
			quest10();
			break;
		case 11:
			printf("A série de Fibonacci é definida da seguinte forma: 1, 1, 2, 3, 5, 8, 13, ..., ou seja, os dois primeiros termos são iguais a 1 e os termos restantes são calculados a partir da soma dos dois anteriores. Escreva um programa em C que gere os 10 primeiros termos da série de Fibonacci.\n\n");
			quest11();
			break;
		case 12:
			printf("Modifique o programa anterior de forma que ele gere os n primeiros termos da série, onde o valor de n é fornecido pelo usuário.\n\n");
			quest12();
			break;
		case 13:
			printf("Modifique o programa anterior de forma que ele gere os termos da série de Fibonacci que são menores ou iguais a n , onde o valor de n é fornecido pelo usuário.\n\n");
			quest13();
			break;
		case 14:
			printf("Escreva um programa em C que calcule e exiba o seno e o cosseno dos ângulos compreendidos no intervalo 0o, 15o, 30o, 45o, ..., 360o, variando o ângulo de 15 em 15 graus.\n\n");
			quest14();
			break;
		case 15:
			printf("Escreva um programa em C que encontre os k primeiros múltiplos de um determinado número n . Os valores de n e k devem ser fornecidos pelo usuário.\n\n");
			quest15();
			break;
		case 16:
			printf("Escreva um programa em C que leia um número n fornecido pelo usuário e exiba todos os divisores de n .\n\n");
			quest16();
			break;
		case 17:
			printf("Escreva um programa em C que encontre os números primos compreendidos entre 100 e 500.\n\n");
			quest17();
			break;
		case 18:
			printf("Escreva um programa em C que encontre os números primos compreendidos entre a e b , onde os valores de a e b são fornecidos pelo usuário.\n\n");
			quest18();
			break;
		case 19:
			printf("Escreva um programa em C que simule uma eleição através de uma urna eletrônica. O programa deve ler um conjunto indeterminado de votos e computar os votos de cada candidato, exibindo o resultado após o encerramento da votação.\n\n");
			quest19();
			break;
		case 20:
			printf("Escreva um programa em C que leia os coeficientes de uma equação do 2o grau e calcule o valor dessa equação para um conjunto de valores. Inicialmente o programa deve ler os valores de a, b e c, definidos pelo usuário. Em seguida, deve haver um laço que possibilite ao usuário calcular o valor da função f(x) para n valores de x, onde o valor de n deve ser fornecido pelo usuário.\n\n");
			quest20();
			break;
		default:
			printf("\n>>Valor inválida! Apenas números [1-20]\n");
		}

		printf("\n\nPressione [Enter] para voltar ao Menu...\n");
		while (getchar() != '\n');
		getchar();
		printf("\e[1;1H\e[2J");
	}
	return 0;
}
