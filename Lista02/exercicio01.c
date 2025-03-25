#include <stdio.h>

int main() {
  int idade;
  printf("Informe a sua idade: ");
  scanf("%d", &idade);

  if (idade <= 17) {
    printf("\nPessoa menor de idade");
  } else {
    printf("\nPessoa maior de idade");
  }
  return 0;
}