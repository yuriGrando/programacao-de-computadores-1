#include <stdio.h>

int main() {
  int numero;
  printf("Informe o numero: ");
  scanf("%d", &numero);

  if (numero != 0) {
    int sobraDivisao = numero%2;
    if (sobraDivisao == 0) {
      printf("\n%d e um numero par", numero);
    } else {
      printf("\n%d e um numero impar", numero);
    }
  } else {
    printf("\n0 nao e par e nem impar");
  }

  printf("\nFim do programa");
  return 0;
}