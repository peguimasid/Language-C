#include <stdio.h>
#include <stdlib.h>

int main() {
  // scanf -> fazer leituras de dados do teclado e guardar em variaveis
  char name;

  printf("Digite uma letra: ");
  scanf("%c", &name);

  printf("Letra %c", name);

  return 0;
}