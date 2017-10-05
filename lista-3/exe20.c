#include <stdio.h>

int main(void) {

  int dia1, mes1, ano1;
  int dia2, mes2, ano2;
  int diaFinal, mesFinal, anoFinal, dataFinal;

  printf("Informe a data inicial: ");
  scanf("%d/%d/%d", &dia1, &mes1, &ano1);

  printf("Informe a data final: ");
  scanf("%d/%d/%d", &dia2, &mes2, &ano2);

  diaFinal = dia2 - dia1;
  mesFinal = mes2 - mes1;
  anoFinal = ano2 - ano1;

  dataFinal = diaFinal + (mesFinal * 30) + (anoFinal * 12 * 30);
  printf("A diferença entre datas é %d dias", dataFinal);
}