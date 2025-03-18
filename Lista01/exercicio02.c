#include <stdio.h>

int main()
{
  printf("Lista 01 / Exercicio 02: \n");

  printf("Programa de subtracao: \n");

  int valor1, valor2, resultado;

  printf("Digite o primeiro numero:");
  scanf("%d", &valor1);

  printf("Digite o segundo numero:");
  scanf("%d", &valor2);

  resultado = valor1 - valor2;

  printf("O resultado da subtracao: %d", resultado);
  return 0;
}