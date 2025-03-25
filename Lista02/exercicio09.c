#include <stdio.h>

int main() {
  int n1, n2, menorValor;
  printf("Informe o primeiro numero:");
  scanf("%d", &n1);
  printf("\nInforme o segundo numero:");
  scanf("%d", &n2);

  if (n1 != n2) {
    if (n1 < n2) {
      menorValor = n1;
    } else {
      menorValor = n2;
    }
    printf("\nMenor valor: %d", menorValor);
  }
  else {
    printf("Dois numeros iguais foram informados");
  }

  printf("\nFim do programa");
  return 0;
}