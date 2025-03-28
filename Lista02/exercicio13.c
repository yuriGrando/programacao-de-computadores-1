#include <stdio.h>
#include <math.h>

int main() {
  int codigo;
  float a, b, c, resultado;
  printf("Programacao de operacoes:");
  printf("\n1 - Multiplicar os tres valores");
  printf("\n2 - Somar os tres valores");
  printf("\n3 - Subtrair os tres valores");
  printf("\n4 - Somar o cubo os tres valores");
  printf("\nDigite a operacao que deseja:");

  scanf("%d", &codigo);

  if (codigo >= 1 && codigo <= 4) {
    printf("\nInforme o valor de A");
    scanf("%f", &a);

    printf("\nInforme o valor de B");
    scanf("%f", &b);

    printf("\nInforme o valor de C");
    scanf("%f", &c);

    if (codigo == 1) {
      resultado = a * b * c;
      printf("\nO resultado da multiplicacao: %.2f", resultado);
    }
    if (codigo == 2) {
      resultado = a + b + c;
      printf("\nO resultado da soma: %.2f", resultado);
    }
    if (codigo == 3) {
      resultado = a - b - c;
      printf("\nO resultado da subtracao: %.2f", resultado);
    }
    if (codigo == 4) {
      resultado = sqrt(a) + sqrt(b) + sqrt(c);
      printf("\nO resultado da soma dos cubos: %.2f", resultado);
    }
  } else {
    printf("Codigo invalido");
  }

  printf("\nFim do programa");
  return 0;
}