#include <stdio.h>
#include <stdlib.h> // Necessário p/ as funções rand() e srand()
#include <time.h> // Necessário p/ função time()

void quest1();
void quest2();
void quest3();
void quest4();
void quest5();
void quest6();
void quest7();
void quest8();
void quest9();
void quest10();
void quest11();
void quest12();
void quest13();

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
        printf("    ..........\n");
        printf("  [13] - Questão 13\n\n");

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
            case 9:
                quest9();
                break;
            case 10:
                quest10();
                break;
            case 11:
                quest11();
                break;
            case 12:
                quest12();
                break;
            case 13:
                quest13();
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


// Funções
void printVetor(int *x, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("[%d] ", x[i]);
    }
}

int checkExist(int *array, int number, int tam) {
    for (int i = 0; i < tam; ++i) {
        if (array[i] == number) { return 1; }
    }
    return 0;
}

// Questões - 1 a 13
void quest1() {
    int vetor[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf(" %d", &vetor[i]);
    }
    printf("================================\n");
    for (int i = 4; i >= 0; i--) {
        printf("Posição %d do vetor: %d\n", i, vetor[i]);
    }

}

void quest2() {
    int tam = 50;
    int vetor[tam];

    for (int i = 0; i < tam; i++) {
        printf("Digite o valor de %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tam; i++) {
        if (vetor[i] % 2 == 0 || vetor[i] % 5 == 0) {
            printf("vetoror %d: %d\n", i, vetor[i]);
        }
    }
}

void quest3() {
    int tam = 10;
    int vetor[tam], vetor2[tam];

    for (int i = 0; i < tam; i++) {
        printf("Digite o valor de %d: ", i + 1);
        scanf("%d", &vetor[i]);
        vetor2[i] = vetor[i] * vetor[i];
    }

    printf("Com valores elevados ao quadrado:\n");
    for (int i = 0; i < tam; ++i) {
        printf("[%d] - %d\n", i, vetor2[i]);
    }
}

void quest4() {
    int tam = 10, numMaior = 0, numMenor = 0;
    int num[tam];
    float altura[tam], altMaior = 0, altMenor = 0;

    for (int i = 0; i < tam; i++) {
        printf("\nNúmero do Aluno: ");
        scanf("%d", &num[i]);
        printf("Altura do Aluno: ");
        scanf("%f", &altura[i]);

        if (num[i] > numMaior) { numMaior = num[i]; }
        if (altura[i] > altMaior) { altMaior = altura[i]; }
    }

    numMenor = numMaior;
    altMenor = altMaior;

    for (int i = 0; i < tam; i++) {
        if (num[i] < numMenor) { numMenor = num[i]; }
        if (altura[i] < altMenor) { altMenor = altura[i]; }
    }

    printf("\nA maior altura foi %.2f e a menor foi %.2f\n", altMaior, altMenor);
    printf("O número maior foi %d e o menor foi %d\n", numMaior, numMenor);
}

void quest5() {
    int tam = 10;
    int vetorA[tam], vetorB[tam];

    for (int i = 0; i < tam; ++i) {
        printf("Digite o Valor do vetor %d: ", i + 1);
        scanf("%d", &vetorA[i]);
        vetorB[tam - i - 1] = vetorA[i];
    }
    printf("\nVetor B após invetido o vetor A:\n\n");
    for (int i = 0; i < tam; ++i) {
        printf("[B][%d]: %d\n", i, vetorB[i]);
    }
}

void quest6() {
    int tam = 24, qtd = 0;
    float temperaturas[tam], maior = 0, media = 0, menor = 9999;

    for (int i = 0; i < tam; i++) {
        printf("\nTemperatura ás %d:00 foi:", i);
        scanf("%f", &temperaturas[i]);
        media += temperaturas[i];
    }

    media = media / tam;

    for (int i = 0; i < tam; i++) {
        if (temperaturas[i] > media) {
            qtd++;
            if (temperaturas[i] > maior) { maior = temperaturas[i]; }
        } else if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
    }

    printf("A média foi %.2f°\n", media);
    printf("A maior temperatura foi %.2f°\n", maior);
    printf("A menor temperatura foi %.2f°\n", menor);
    printf("Bateu %dx acima da média\n", qtd);
}

void quest7() {
    int tam = 5;
    float notas[tam], media = 0, maior = 0, menor = 9999;

    for (int i = 0; i < tam; ++i) {
        printf("Digite a nota do %d° ano: ", i + 1);
        scanf("%f ", &notas[i]);
    }

    for (int i = 0; i < tam; ++i) {
        if (notas[i] < menor) { menor = notas[i]; }
        if (notas[i] > maior) { maior = notas[i]; }
        media += notas[i];
    }

    media = media / tam;
    printf("A média foi %.1f\nA menor nota foi: %.1f\nA maior nota foi: %.1f", media, menor, maior);
}

void quest8() {
    double array[5];

    for (int i = 0; i < 5; ++i) {
        printf("Digite o %d° valor: \n", i + 1);
        scanf("%lf", &array[i]);
    }

    for (int i = 0; i < 5; ++i) {
        printf("[%lf] ", array[i]);
    }
}

void quest9() {
    srand((unsigned int) time(NULL));
    int tam = 6, cartao[tam];

    for (int i = 0; i < tam; ++i) {
        int aleatorio = rand() % 60;
        if (checkExist(cartao, aleatorio, tam) == 0) {
            cartao[i] = aleatorio;
        } else { i--; }
    }
    printf(">>>> MEGA-SENA\nOs números aleatorio foram: \n\n");
    printVetor(cartao, tam);
}

void quest10() {
    int tam = 10, number, array[tam];

    for (int i = 0; i < tam; ++i) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &number);
        if (checkExist(array, number, tam) == 0) {
            array[i] = number;
        } else {
            printf("\nO número %d já existe!\n", number);
            i--;
        }
    }
    printVetor(array, tam);
}

void quest11() {
    int tam = 10, tam2 = 0, a[tam], b[tam];

    for (int i = 0; i < tam; ++i) {
        printf("Digite o %dº do vetor a: ", i + 1);
        scanf(" %d", &a[i]);
        if (checkExist(a, b[i], tam) == 0) { tam2++; }
    }
    printf("\n\n");

    for (int i = 0; i < tam; ++i) {
        printf("Digite o %dº do vetor b: ", i + 1);
        scanf(" %d", &b[i]);
        if (checkExist(a, b[i], tam) == 0) { tam2++; }
    }

    int uni[tam2];

    for (int j = 0; j < tam2; j++) {
        for (int i = 0; i < tam; ++i) {
            if (checkExist(uni, a[i], tam2) == 0 && checkExist(b, a[i], tam2) == 0) { uni[j++] = a[i]; }
            if (checkExist(uni, b[i], tam2) == 0 && checkExist(a, b[i], tam) == 0) { uni[j++] = b[i]; }
        }
        break;
    }

    printf("\n\nVetor a: ");
    printVetor(a, tam);
    printf("\nVetor b: ");
    printVetor(b, tam);
    printf("\nUnião:");
    printVetor(b, tam2);
}

void quest12() {
    int tam = 10, tam2 = 0, A[tam], B[tam];

    for (int i = 0; i < tam; ++i) {
        printf("Digite o %dº valor  do vetor A: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("\n\n");
    for (int i = 0; i < tam; ++i) {
        printf("Digite o %dº valor do vetor B: ", i + 1);
        scanf("%d", &B[i]);
        if (checkExist(A, B[i], tam) == 11) { tam2++; }
    }

    int interseccao[tam2];

    for (int j = 0; j < tam2; ++j) {
        for (int i = 0; i < tam; ++i) {
            if (checkExist(A, B[i], tam) == 1 && checkExist(interseccao, B[i], tam2) == 0) {
                interseccao[j++] = B[i];
            }
        }
        break;
    }

    printf("\n\nVetor A: ");
    printVetor(A, tam);
    printf("\nVetor B: ");
    printVetor(B, tam);
    printf("\nInterseccao: ");
    printVetor(interseccao, tam2);
}

void quest13() {
    int tam = 10, array[tam], temp;

    for (int i = 0; i < tam; ++i) {
        printf("Digite o %dº valor do vetor: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < tam; j++) {
        for (int i = 0; i < tam; i++) {
            if (array[i + 1] < array[i]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    printVetor(array, tam);
}