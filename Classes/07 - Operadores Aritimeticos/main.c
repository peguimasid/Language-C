#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
    soma           + | 2 + 2 = 4
    subtração      - | 4 - 2 = 2
    multiplicação  * | 3 * 5 = 15
    divisão        / | 18 / 9 = 2
    resto          % | 4 % 2 = 0
  */

  //  SOMA
  int v = 2 + 2;
  printf("%d\n", v);

  //  SUBTRACAO
  int w = 2 - 2;
  printf("%d\n", w);

  //  MULTIPLICACAO
  int x = 2 * 4;
  printf("%d\n", x);

  //  DIVISAO
  int y = 9 / 3;
  printf("%d\n", y);

  //  RESTO
  int z = 4 % 2;
  printf("%d\n", z);

  return 0;
}