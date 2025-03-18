#include <stdio.h>

int main()
{
  printf("Lista 01 / Exercicio 01: \n");

  int valor1, valor2, resultado;

  printf("Programa de Soma \n");
  printf("Digite o primeiro valor:");
  scanf("%d", &valor1);
  printf("Digite o segundo valor:");
  scanf("%d", &valor2);

  resultado = valor1 + valor2;

  printf("O resultado da soma: %d", resultado);
  return 0;
}