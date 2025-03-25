#include <stdio.h>

int main() {
  int numero;
  printf("Informe o numero: ");
  scanf("%d", &numero);

  if (numero < 0) {
    printf("\n%d menor que zero", numero);
  } else if (numero > 0) {
    printf("\n%d maior que zero", numero);
  } else {
    printf("\nnumero igual a zero");
  }
  return 0;
}