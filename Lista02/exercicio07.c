#include <stdio.h>

int main() {
  int n1, n2;
  printf("Informe o primeiro numero:");
  scanf("%d", &n1);
  printf("\nInforme o segundo numero:");
  scanf("%d", &n2);

  if (n1%n2 == 0 || n2%n1 == 0) {
    printf("\nOs numeros sao multiplos");
  } else {
    printf("\nOs numeros NAO sao multiplos");
  }

  printf("\nFim do programa");
  return 0;
}