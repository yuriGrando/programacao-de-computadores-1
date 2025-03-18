#include <stdio.h>

int main()
{
  printf("Lista 01 / Exercicio 04: \n");

  printf("Programa de divisao: \n");

  float valor1, valor2;

  printf("Digite o primeiro numero:");
  scanf("%d", &valor1);

  printf("Digite o segundo numero:");
  scanf("%d", &valor2);

  float resultado = (float)valor1 / valor2;

  printf("O resultado da divisao: %.2f", resultado);
  return 0;
}