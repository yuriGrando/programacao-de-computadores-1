#include <stdio.h>

int main()
{
  printf("Lista 01 / Exercicio 05: \n");

  printf("Programa de multiplas operacoes: \n");

  float valor1, valor2, rSoma, rSubtracao, rMultiplicacao, rDivisao;

  printf("Digite o primeiro numero: ");
  scanf("%f", &valor1);

  printf("Digite o segundo numero: ");
  scanf("%f", &valor2);

  rSoma = valor1 + valor2;
  rSubtracao = valor1 - valor2;
  rMultiplicacao = valor1 * valor2;
  rDivisao = valor1 / valor2;

  printf("Numeros digitados: %.2f e %.2f \n", valor1, valor2);
  printf("A soma destes numeros e %.2f \n", rSoma);
  printf("A subtracao destes numeros e %.2f \n", rSubtracao);
  printf("A multiplicacao destes numeros e %.2f \n", rMultiplicacao);
  printf("A divisao destes numeros e %.2f", rDivisao);
  return 0;
}