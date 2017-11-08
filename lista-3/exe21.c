#include <stdio.h>

int main(void) {
    int h1, m1 , s1, h2, m2, s2, hora1, hora2, total;

    printf("Digite o pirmeiro horario: ");
    scanf("%02d:%02d:%02d", &h1, &m1, &s1);

    printf("Digite o pirmeiro horario: ");
    scanf("%02d:%02d:%02d", &h2, &m2, &s2);

    hora1 = (h1 * 3600) + (m1 * 60);
    hora2 = (h2 * 3600) + (m2 * 60);
    total = hora1 - hora2;

    printf("%d segundos de diferença!\n\n", (total * 60 + (s1 - s2)) * (-1));
    return 0;
}
