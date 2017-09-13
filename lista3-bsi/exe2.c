#include <stdio.h>
int main() {
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);
  if (num > 0) {
    if (num % 2 == 0) {
      printf("O Número é par e positivo");
    } else {
      printf("O Número é impar é positivo");
    }
  } else {
    if (num == 0) {
      printf("O número é nulo");
    } else {
      if (num % 2 == 0) {
        printf("O numero é par e negativo");
      } else {
        printf("O numero é impar e negativo");
      }
    }
  }
  return 0;
}
