#include <stdio.h>

int main()
{
  printf("Lista 01 / Exercicio 08: \n");

  printf("Programa soma dos termos da PA.: \n");

  int primeiroTermo, ultimoTermo, razao;

  printf("Digite o primeiro termo: ");
  scanf("%d", &primeiroTermo);

  printf("Digite o ultimo termo: ");
  scanf("%d", &ultimoTermo);

  printf("Digite a razao: ");
  scanf("%d", &razao);

  float numeroDeTermos = (ultimoTermo - primeiroTermo) / razao;
  float somaDeTermos = (primeiroTermo + ultimoTermo) / 2 * numeroDeTermos;
  float resultado = somaDeTermos;
  printf("O resultado e %.2f", resultado);

  return 0;
}