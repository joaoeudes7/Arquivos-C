#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
	setlocale(LC_ALL, "portuguese");

	int escolha = 1;

	while (escolha != 0) {
		int ptInicio = 1, ptFinal = 50, palpite = 0, numSecret = 0;

		printf(">> Projeto Vira-Copo!\n");
		printf("[1]- Sortear\n");
		printf("[2]- Escolher\n\n");
		printf("[0]- Sair\n\n");
		printf("Sua escolha:\n>> ");
		scanf("%d", &escolha);

		switch (escolha) {
		case 1:
			srand((unsigned) time(NULL));
			numSecret = 1 + (rand() % ptFinal);
			break;
		case 2:
			while (numSecret < ptInicio || numSecret > ptFinal) {
				printf("Digite o número secreto: ");
				scanf("%d", &numSecret);
			}
			printf("\e[1;1H\e[2J");
			break;
		default:
			printf("Opção inválida!\n");
		};

		while (numSecret != palpite) {
			for (int i = ptInicio; i <= ptFinal; i++) {
				printf("%d ", i);
			}

			while (palpite < ptInicio || palpite > ptFinal) {
				printf("\n\nDigite seu palpite\n>> ");
				scanf("%d", &palpite);
			}

			if (palpite == numSecret) {
				printf("/// Vira-Copo! Você acertou!\n\n");
			} else {
				if (numSecret < palpite) {
					ptFinal = palpite - 1;
				} else {
					ptInicio = palpite + 1;
				}
			}
		}
		printf("Quer jogar de novo?? Aperte Enter....\n");
		while (getchar() != '\n');
		getchar();
		printf("\e[1;1H\e[2J");
	}
	return 0;
}