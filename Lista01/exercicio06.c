#include <stdio.h>

int main()
{
  printf("Lista 01 / Exercicio 06: \n");

  printf("Programa de elevacao da potencia: \n");

  int valor1, valor2, subtracao, resultado;

  printf("Digite o primeiro numero: ");
  scanf("%d", &valor1);

  printf("Digite o segundo numero: ");
  scanf("%d", &valor2);

  subtracao = valor1 - valor2;
  resultado = subtracao * subtracao;

  printf("O resultado e %d", resultado);

  return 0;
}