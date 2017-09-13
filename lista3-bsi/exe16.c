#include <stdio.h>

int main(void) {

  int minutos, segundos, hora, minutosTotais;
  float TotalPagar;

  printf("Informe a hora de entrada(hh:mm:ss)");
  scanf("%d:%d:%d", &hora, &minutos, &segundos);

  minutosTotais = (hora * 60) + minutos + (segundos / 60);

  if (minutosTotais < 60) {
    TotalPagar = minutosTotais * 0.04;

  } else if (minutosTotais < 2 * 60) {
    TotalPagar = minutosTotais * 0.03;

  } else if (minutosTotais < 5 * 60) {
    TotalPagar = minutosTotais * 0.02;

  } else {
    TotalPagar = minutosTotais * 0.01;
  }

  printf("Total a pagar: R$ %.2f", TotalPagar);

  return 0;
}