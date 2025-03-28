#include <stdio.h>

int main() {
  int idade;
  printf("Qual a idade do nadador?");
  scanf("%d", &idade);

  if (idade >= 5) {
    if (idade >= 5 && idade <= 7) {
      printf("Infantil A");
    }
    if (idade >= 8 && idade <= 10) {
      printf("Infantil B");
    }
    if (idade >= 11 && idade <= 13) {
      printf("Juvenil A");
    }
    if (idade >= 14 && idade <= 17) {
      printf("Juvenil B");
    }
    if (idade >= 18) {
      printf("Senior");
    }
  } else {
    printf("O nadador nao tem categoria, pois ele tem menos que 5 anos");
  }

  printf("\nFim do programa");
  return 0;
}