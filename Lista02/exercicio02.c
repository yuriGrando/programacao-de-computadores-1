#include <stdio.h>

int main() {
  int numero;
  printf("Informe o numero: ");
  scanf("%d", &numero);

  if (numero >= 0) {
    printf("\n%d Numero positivo", numero);
  } else {
    printf("\n%d Numero negativo", numero);
  }
  return 0;
}