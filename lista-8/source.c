#include <stdio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

void quest1();
void quest2();
// void quest3();
// void quest4();
// void quest5();
// void quest6();
// void quest7();
// void quest8();
// void quest9();

int main() {
	int option = 1;

	printf("%s// UFRN - Progamação%s\n", KCYN, KWHT);
	printf("// Docente: Alexandre\n");
	printf("// Discente: João Eudes\n\n");

	while (option != 0) {
		printf("%s >> MENU ----------\n%s", KGRN, KWHT);
		for (int i = 1; i < 10; i++) {
		printf("    [%d] - Questão %d\n", i, i);			
		}

		
		printf("\n\nQual questão deseja visualizar (0 p/ Sair)\n>> ");
		scanf("%d", &option);
		printf("\n\n");

		switch (option) {
		case 1:
			quest1();
			break;
		case 2:
			quest2();
			break;
		// case 3:
		// 	quest3();
		// 	break;
		// case 4:
		// 	quest4();
		// 	break;
		// case 5:
		// 	quest5();
		// 	break;
		// case 6:
		// 	quest6();
		// 	break;
		// case 7:
		// 	quest7();
		// 	break;
		// case 8:
		// 	quest8();
		// 	break;
		default:
			printf("\n>>Valor inválida! Apenas números [1-8]\n");
		}

		printf("\n\nPressione [Enter] para voltar ao Menu...\n");
		while (getchar() != '\n');
		getchar();
		printf("\e[1;1H\e[2J");
	}
	return 0;
}


void quest1() {
	char caracteres[80];

	struct {
		int qtd;
		int pontuacao;
		int numeros;
		int minusculos;
		int vogais;
		int palavras;
	} _tipo = {0, 0, 0, 0, 0, 0};

	printf("Alimente a cadeia de caracteres: ");
	scanf(" %79[^\n]", caracteres);

	while (caracteres[_tipo.qtd] != '\0') {
		char temp = caracteres[_tipo.qtd];

		if (temp >= '0' && temp <= '9') {
			_tipo.numeros++;
		} else if (temp >= '!' && temp <= '@') {
			_tipo.pontuacao++;
		} else if (temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z') {
			if (temp >= 'a' && temp <= 'z') {
				_tipo.minusculos++;
				if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
					_tipo.vogais++;
				} else if (temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U') {
					_tipo.vogais++;
				}
			}
		} else if (temp == ' ' && (caracteres[_tipo.qtd - 1] >= 'A' && caracteres[_tipo.qtd + 1] >= 'A')) {
			_tipo.palavras++;
		}
		_tipo.qtd++;
	}

	printf("Quantidade de caracteres: %d\n", _tipo.qtd);
	printf("Quantidade de números: %d\n", _tipo.numeros);
	printf("Quantidade de pontuação: %d\n", _tipo.pontuacao);
	printf("Quantidade de minusculos: %d\n", _tipo.minusculos);
	printf("Quantidade de vogais: %d\n", _tipo.vogais);
	printf("Quantidade de palavras: %d\n", _tipo.palavras + 1);
}

void quest2() {
	char caracteres[80];
	printf("Alimente a cadeia de caracteres: ");
	scanf(" %79[^\n]", caracteres);

	for (int i=0; caracteres[i] != '\0'; i++) {
		char caractere = caracteres[i];
		if (caractere >= 97 && caractere <= 122) {
			caracteres[i] = caractere - 32;
		}
	}

	printf("Em maiúsculo: %s", caracteres);
}

void quest3() {

}