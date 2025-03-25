#include <stdio.h>

int main() {
  int n1, n2, n3, n4, n5, n6;
  int nImpar = 0;

  printf("Informe o numero 01: ");
  scanf("%d", &n1);
  if (n1%2 == 1) {
    nImpar++;
  }

  printf("\nInforme o numero 02: ");
  scanf("%d", &n2);
  if (n2%2 == 1) {
    nImpar++;
  }

  printf("\nInforme o numero 03: ");
  scanf("%d", &n3);
  if (n3%2 == 1) {
    nImpar++;
  }

  printf("\nInforme o numero 04: ");
  scanf("%d", &n4);
  if (n4%2 == 1) {
    nImpar++;
  }

  printf("\nInforme o numero 05: ");
  scanf("%d", &n5);
  if (n5%2 == 1) {
    nImpar++;
  }

  printf("\nInforme o numero 06: ");
  scanf("%d", &n6);
  if (n6%2 == 1) {
    nImpar++;
  }

  printf("\nForam informados %d numeros impares", nImpar);

  printf("\nFim do programa");
  return 0;
}