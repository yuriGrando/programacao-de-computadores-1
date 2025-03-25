#include <stdio.h>

int main() {
  int n1, n2, n3, n4, n5, n6;
  int soma = 0;

  printf("Informe o numero 01: ");
  scanf("%d", &n1);
  if (n1%2 == 0) {
    soma+= n1;
  }

  printf("\nInforme o numero 02: ");
  scanf("%d", &n2);
  if (n2%2 == 0) {
    soma+= n2;
  }

  printf("\nInforme o numero 03: ");
  scanf("%d", &n3);
  if (n3%2 == 0) {
    soma+= n3;
  }

  printf("\nInforme o numero 04: ");
  scanf("%d", &n4);
  if (n4%2 == 0) {
    soma+= n4;
  }

  printf("\nInforme o numero 05: ");
  scanf("%d", &n5);
  if (n5%2 == 0) {
    soma+= n5;
  }

  printf("\nInforme o numero 06: ");
  scanf("%d", &n6);
  if (n6%2 == 0) {
    soma+= n6;
  }

  printf("\nA soma dos numero pares e %d", soma);

  printf("\nFim do programa");
  return 0;
}