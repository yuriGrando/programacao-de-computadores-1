#include <stdio.h>

int main() {
  int n1, n2, maiorValor;
  printf("Informe o primeiro numero:");
  scanf("%d", &n1);
  printf("\nInforme o segundo numero:");
  scanf("%d", &n2);

  if (n1 != n2) {
    if (n1 > n2) {
      maiorValor = n1;
    } else {
      maiorValor = n2;
    }
    printf("\nMaior valor: %d", maiorValor);
  }
  else {
    printf("Dois numeros iguais foram informados");
  }

  printf("\nFim do programa");
  return 0;
}