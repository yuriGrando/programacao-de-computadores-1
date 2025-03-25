#include <stdio.h>

int main() {
  float n1, n2, maior, menor, diferenca;
  printf("Informe o primeiro numero:");
  scanf("%f", &n1);
  printf("\nInforme o segundo numero:");
  scanf("%f", &n2);

  if (n1 > n2) {
    maior = n1;
    menor = n2;
  } else {
    maior = n2;
    menor = n1;
  }

  diferenca = maior - menor;
  printf("%.1f - %.1f = %.1f", maior, menor, diferenca);

  printf("\nFim do programa");
  return 0;
}