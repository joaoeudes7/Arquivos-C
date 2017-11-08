#include <stdio.h>
#include <string.h>

void quest1();

void quest2();

void quest3();

void quest4();

void quest5();

void quest6();

void quest7();

void quest8();

void quest9();

int main() {
    int option = 1;

    printf("// UFRN - Progamação\n");
    printf("// Docente: Alexandre\n");
    printf("// Discente: João Eudes\n\n");

    while (option != 0) {
        printf(" >> MENU ----------\n");
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

// Functions

// Count Words in array
int countWords(char *array) {
    int tam = (int) strlen(array);
    int count = 0;
    for (int i = 0; i < tam; ++i) {
        if (array[i] == ' ' && (array[i - 1] >= 'A' && array[i + 1] >= 'A')) {
            count++;
        }
    }
    count++;
    return count;
}

// Remove Garbage
void cleanGarbage(char *array, int tam) {
    for (int i = 0; i < tam; ++i) {
        array[i] = '\0';
    }
}

void uppercase(char *array) {
    for (int i = 0; array[i] != '\0'; ++i) {
        if (array[i] >= 97 && array[i] <= 122) {
            array[i] = (char) (array[i] - 32);
        }
    }
}

// Quests
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

    for (int i = 0; caracteres[i] != '\0'; i++) {
        char caractere = caracteres[i];
        if (caractere >= 97 && caractere <= 122) {
            caracteres[i] = (char) (caractere - 32);
        }
    }

    printf("Em maiúsculo: %s", caracteres);
}

void quest3() {
    char caracteres[80];
    printf("Alimente a cadeia de caracteres: ");
    scanf(" %79[^\n]", caracteres);

    int tam = 0;

    for (tam; caracteres[tam] != '\0'; tam++) {
        if (caracteres[tam] == 'a' || caracteres[tam] == 'e' || caracteres[tam] == 'i' || caracteres[tam] == 'o' ||
            caracteres[tam] == 'u') {
            caracteres[tam] = '#';
        } else if (caracteres[tam] == 'A' || caracteres[tam] == 'E' || caracteres[tam] == 'I' ||
                   caracteres[tam] == 'O' || caracteres[tam] == 'U') {
            caracteres[tam] = '#';
        }
    }

    tam--;
    for (int i = 0; i <= tam; i++) {
        char temp = caracteres[i];
        caracteres[i] = caracteres[tam];
        caracteres[tam] = temp;
        tam--;
    }

    printf("Resultado: %s", caracteres);
}

void quest4() {
    char caracteres[80];
    printf("Alimente a cadeia de caracteres: ");
    scanf(" %79[^\n]", caracteres);
    int tam = (int) strlen(caracteres);
    int tam2 = tam;
    int palavras = countWords(caracteres);

    char temp[palavras][20];

    for (int k = 0; k < palavras; ++k) {
        cleanGarbage(temp[k], 20);
    }

    int j = 0;
    for (int i = 0; caracteres[i] != '\0'; ++i) {
        int position = tam - tam2;
        if (caracteres[i] != ' ') {
            temp[position][j] = caracteres[i];
            j++;
        } else {
            tam2--;
            j = 0;
        }
    }
    uppercase(temp[palavras - 1]);
    printf("Saída: %s, %s", temp[palavras - 1], temp[0]);
}

void quest5() {
    char str1[41],str2[41],nome[41]="galera",nome2[41]=" moçada",nome3[41]="bom dia";
    printf("Digite o primeiro texto: ");
    scanf(" %[^\n]", str1);
    printf("Digite o segundo texto: ");
    scanf(" %[^\n]", str2);
    if(strcmp(str1,nome3)==0 &&strcmp(str2,nome)== 0) strcat(str1, nome2);
    else strcat(str1, str2);
    printf("%s\n", str1);

}

void quest6() {
    char *dicionary[] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    char caracteres[80];
    printf("Alimente a cadeia de caracteres: ");
    scanf(" %79[^\n]", caracteres);

    printf("%s: ", caracteres);
    for (int i = 0; caracteres[i] != '\0'; ++i) {
        int num = (caracteres[i] - 48);
        printf(" %s", dicionary[num]);
        if ('\0' != caracteres[i + 1]) {
            printf(",");
        }
    }
}

void quest7() {
    char caracteres[20] = "";
    char caracteres2[20] = "";
    char temp;

    printf("Alimente a cadeia de caracteres: ");
    scanf(" %79[^\n]", caracteres);

    printf("Digite o caractere que deseja remover: ");
    scanf(" %c", &temp);

    int j = 0;
    for (int i = 0; caracteres[i] != '\0'; ++i) {
        if (temp != caracteres[i]) {
            caracteres2[j] = caracteres[i];
            j++;
        }
    }

    printf("Resultado: %s\n", caracteres2);
}

void quest8() {
    char caracteres[80];
    int indice;
    char temp;

    printf("Alimente a cadeia de caracteres: ");
    scanf(" %79[^\n]", caracteres);

    printf("Digite a posição do índice do caractere que deseja adicionar: %s \n>> ", caracteres);
    scanf(" %d", &indice);
    printf("Digite o caractere que deseja adicionar: ");
    scanf(" %c", &temp);

    int tam = (int) strlen(caracteres) + 1;
    for (int i = 0; i < tam; ++i) {
        if (indice - 1 <= i) {
            char temp2 = caracteres[i];
            caracteres[i] = temp;
            temp = temp2;
        }
    }

    printf("Resultado: %s\n", caracteres);
}

void quest9() {
    struct {
        char nome[40];
        char sobrenome[40];
    } _pessoa[20];

    int qtd = 0;
    int opt = 1;
    for (int i = 0; i < 20; ++i) {
        printf("Digite o nome da %dº pessoa: ", i + 1);
        scanf(" %79[^\n]", _pessoa[i].nome);
        printf("Digite o sobrenome da %dº pessoa: ", i + 1);
        scanf(" %79[^\n]", _pessoa[i].sobrenome);
        qtd++;
        printf("\nIrá cadastrar a %dº pessoa: \n[1] - Sim\t [2] - Não\n>> ", i + 2);
        scanf("%d", &opt);
        if (opt == 2) {
            break;
        }
    }

    for (int i = 0; i < qtd; ++i) {
        printf("O nome da %d pessoa: %s\n", i + 1, _pessoa[i].nome);
    }


}
