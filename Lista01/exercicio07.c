#include <stdio.h>

int main()
{
  printf("Lista 01 / Exercicio 07: \n");

  printf("Programa media aritmetica: \n");

  float valor1, valor2;

  printf("Digite o primeiro numero: ");
  scanf("%f", &valor1);

  printf("Digite o segundo numero: ");
  scanf("%f", &valor2);

  float resultado = ((valor1 * 4) + (valor2 * 6)) / 2;
  printf("O resultado e %.2f", resultado);

  return 0;
}