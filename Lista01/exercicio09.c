#include <stdio.h>

int main()
{
  printf("Lista 01 / Exercicio 09: \n");

  printf("Programa calcula a area de um quadrado: \n");

  float x, area;

  printf("Digite o valor do lado do quadrado: ");
  scanf("%f", &x);

  area = x * x;

  printf("O resultado e %.2f", area);

  return 0;
}