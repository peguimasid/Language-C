#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 10;
  int y = 10;

  // Pós incremento: Atribuição primeiro, soma depois
  y = x++;
  // O comando acima é a mesma coisa que isso:
  y = x;
  x++;
  ////////////////////////////////////////////////////////
  // Pré incremento: Soma primeiro, atribuição depois
  y = ++x;
  // O comando acima é a mesma coisa que isso:
  x++;
  y = x;

  printf("x = %d\n", x);
  printf("y = %d", y);

  return 0;
}