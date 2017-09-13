#include <stdio.h>
#include <math.h>

int main () {
  
  int a, b, c, delta;
  float x1, x2;

  printf("Informe o coeficiente a: ");
  scanf("%d", &a);
  printf("Informe o coeficiente b: ");
  scanf("%d", &b);
  printf("Informe o coeficiente c: ");
  scanf("%d", &c);

  if (a != 0) {
    delta = (b * b) - (4 * a * c);
    if (delta > 0) {
      x1 = (-b + sqrt(delta)) / (2 * a);
      x2 = (-b - sqrt(delta)) / (2 * a);
      printf("A equação possui duas raizes reais, são elas x' = %.2f e x'' = %.2f ", x1, x2);
    }
    else if (delta == 0) {
      x1 = (-b + sqrt(delta)) / (2 * a);
      printf("A equação possui uma raiz real: x'=%f ", x1);
    } else {
      printf(("A equação não possui raiz real"));
    }
  }
  else printf("Nao é uma equação do segundo grau");
}