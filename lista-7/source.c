#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quest1();
void quest2();
void quest3();
void quest4();
void quest5();
void quest6();
void quest7();
void quest8();

int main() {
	int option = 1;

	printf("// UFRN - Progamação\n");
	printf("// Docente: Alexandre\n");
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
		printf("  [8] - Questão 8\n\n");

		printf("\nQual questão deseja visualizar (0 p/ Sair)\n>> ");
		scanf("%d", &option);
		printf("\n\n");

		switch (option) {
		case 1:
			quest1();
			break;
		case 2:
			quest2();
			break;
		case 3:
			quest3();
			break;
		case 4:
			quest4();
			break;
		case 5:
			quest5();
			break;
		case 6:
			quest6();
			break;
		case 7:
			quest7();
			break;
		case 8:
			quest8();
			break;
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

// Funções
int checkExist(int *array, int number, int tam) {
    for (int i = 0; i < tam; ++i) {
        if (array[i] == number) { return 1; }
    }
    return 0;
}

// Questões
void quest1() {
	int l = 3, c = 3;
	int m[l][c];
	for (int i = 0; i < l; ++i) {
		for (int j = 0; j < c; ++j) {
			printf("Matriz [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	int m2[l][c];

	for (int i = 0; i < l; ++i) {
		for (int j = 0; j < c; ++j) {
			m2[i][j] = m[i][j] * m[i][j];
		}
	}
	printf("\nMatriz²:\n");
	for (int i = 0; i < l; ++i) {
		printf("[");
		for (int j = 0; j < c; ++j) {
			printf(" %d ", m2[i][j]);
		}
		printf("]\n");
	}
}

void quest2() {
	int l = 3, c = 2;
	int a[l][c];
	int b[l][c];

	for (int i = 0; i < l; ++i) {
		for (int j = 0; j < c; ++j) {
			printf("Matriz A [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < l; ++i) {
		for (int j = 0; j < c; ++j) {
			printf("Matriz B [%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	printf("\nMatriz Soma:\n");
	for (int i = 0; i < l; ++i) {
		printf("[");
		for (int j = 0; j < c; ++j) {
			printf(" %d ", a[i][j] + b[i][j]);
		}
		printf("]\n");
	}

	printf("\nMatriz Diferença:\n");
	for (int i = 0; i < l; ++i) {
		printf("[");
		for (int j = 0; j < c; ++j) {
			printf(" %d ", a[i][j] - b[i][j]);
		}
		printf("]\n");
	}
}

void quest3() {
	int l = 5, c = 5, soma = 0;
	int m[l][c];
	for (int i = 0; i < l; ++i) {
		for (int j = 0; j < c; ++j) {
			printf("Matriz [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
			if (i == j) {
				soma += m[i][j];
			}
		}
	}

	printf("O resultado soma dos números na diagonal principal é : %d\n", soma );
}

void quest4() {
	int l = 0, c = 0;
	printf("Digite a qtd de Linhas: ");
	scanf("%d", &l);
	printf("Digite a qtd de Colunas: ");
	scanf("%d", &c);

	int m[l][c];
	int mt[c][l];

	for (int i = 0; i < l; ++i) {
		for (int j = 0; j < c; ++j) {
			printf("Matriz [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
			mt [j][i] = m[i][j];
		}
	}

	printf("\nMatriz Transposta:\n");
	for (int i = 0; i < l; ++i) {
		printf("[");
		for (int j = 0; j < c; ++j) {
			printf(" %d ", mt[i][j]);
		}
		printf("]\n");
	}
}

void quest5() {
	int l = 3, c = 3;
	int a[l][c];
	int b[l][c];
	int mult[l][c];

	for (int i = 0; i < l; ++i) {
		for (int j = 0; j < c; ++j) {
			printf("Matriz A [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < l; ++i) {
		for (int j = 0; j < c; ++j) {
			printf("Matriz B [%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	for (int i = 0; i < l; ++i) {
		for (int j = 0; j < c; ++j) {
			int temp = 0;
			for (int k = 0; k < l; ++k) {
				temp += a[i][k]+b[k][j];
			}
			mult[i][j] = temp;
		}
	}

	 printf("\nMatriz Multiplicação:\n");
	 for (int i = 0; i < l; ++i) {
	 	printf("[");
	 	for (int j = 0; j < c; ++j) {
	 		printf(" %d ", mult[i][j]);
	 	}
	 	printf("]\n");
	 }

}

void quest6() {
	int l = 0, c = 0, somal[l], somac[c], temp=0;
	printf("Digite a qtd de Linhas: ");
	scanf(" %d", &l);
	printf("Digite a qtd de Colunas: ");
	scanf(" %d", &c);

	int m[l][c];
	for (int i = 0; i < l; ++i) {
		temp = 0;
		for (int j = 0; j < c; ++j) {
			printf("Matriz [%d][%d]: ", i, j);
			scanf(" %d", &m[i][j]);
			temp += m[i][j];
		}
		somal[i] = temp;
	}

	for (int i = 0; i < c; ++i) {
		temp = 0;
		for (int k = 0; k < l; ++k) {
			temp+= m[i][k];
		}
		somac[i] = temp;
	}

	for (int i = 0; i < l; ++i) {
		printf("A soma da linha %d: %d\n", i+1, somal[i]);
	}
	for (int i = 0; i < c; ++i) {
		printf("A soma da coluna %d: %d\n", i+1, somal[i]);
	}


}

void quest7() {
	int l = 0;
	printf("Quantos cartoes deseja gera?\n");
	scanf(" %d", &l);
	srand((unsigned int) time(NULL));
	int cartao[l][6];

	for (int i = 0; i < l; ++i) {
		for (int j = 0; j < 6; ++j) {
			int aleatorio = rand() % 60;
			if (checkExist((int *) cartao, aleatorio, l) == 0) {
				cartao[i][j] = aleatorio;
			} else { j--; }
		}
	}
	printf(">>>> MEGA-SENA\nOs cartões com números aleatorio foram: \n\n");
	for (int i = 0; i < l; ++i) {
		printf("Cartão %d: [", i+1);
		for (int j = 0; j < 6; ++j) {
			printf(" %d ", cartao[i][j]);
		}
		printf("]\n");
	}
}

void quest8() {
	int l = 15, altMaior = 0, altMenor = 0, pesoMaior = 0, pesoMenor = 0, idadeMaior = 0, idadeMenor = 0;
	char nome[l][80];
	float dados[l][3], pesoMedio = 0, altMedia = 0, idadeMedia = 0;

	for (int i = 0; i < l; ++i) {
		printf("\nNome do usuário %d: ", i + 1);
		scanf(" %79[^\n]", nome[i]);

		printf("Idade do usuário %d: ", i + 1);
		scanf(" %f", &dados[i][0]);

		printf("Peso do usuário %d: ", i + 1);
		scanf(" %f", &dados[i][1]);

		printf("Altura do usuário %d: ", i + 1);
		scanf(" %f", &dados[i][2]);
	}

	printf("\n\nNome\tIdade\tPeso\tAltura\n\n");
	for (int i = 0; i < l; ++i) {
		printf("%s\t%.0f\t%.2f \t%.2f\n", nome[i], dados[i][0], dados[i][1], dados[i][2]);

		idadeMedia += dados[i][0] / l;
		pesoMedio += dados[i][1] / l;
		altMedia += dados[i][2] / l;
	}

	for (int i = 1; i < l; ++i) {

		if (dados[i][0] > dados[idadeMaior][0]) {
			idadeMaior = i;
		}
		if (dados[i][0] > dados[idadeMenor][0]) {
			idadeMenor = i;
		}
		if (dados[i][1] > dados[pesoMaior][1]) {
			pesoMaior = i;
		}
		if (dados[i][1] < dados[pesoMenor][1]) {
			pesoMenor = i;
		}
		if (dados[i][2] > dados[altMaior][2]) {
			altMaior = i;
		}
		if (dados[i][2] < dados[altMenor][2]) {
			altMenor = i;
		}
	}

	printf("\n\nA Idade média é: %.0f\n", idadeMedia);
	printf("O Peso médio é: %.2f\n", pesoMedio);
	printf("A Altura média é: %.2f\n", altMedia);


	printf("\n\nO usuário com maior idade é: %s - %.0f anos\n", nome[idadeMaior], dados[idadeMaior][0]);
	printf("O usuário com menor idade é: %s - %.0f anos\n", nome[idadeMenor], dados[idadeMenor][0]);
	printf("O usuário com maior peso é: %s - %.2f Kg\n", nome[pesoMaior], dados[pesoMaior][1]);
	printf("O usuário com menor peso é: %s - %.2f Kg\n", nome[pesoMenor], dados[pesoMenor][1]);
	printf("O usuário mais alto é: %s - %.2f de altura\n", nome[altMaior], dados[altMaior][2]);
	printf("O menor usuário é: %s - %.2f de altura\n", nome[altMenor], dados[altMenor][2]);
}