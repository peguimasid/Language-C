#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 10;
  int y = 10;

  // Sem atribuição simplificada
  // x = x + y;

  // Com atribuição simplificada
  // x *= y; -> x = x * y
  // x += y; -> x = x + y
  // x /= y; -> x = x / y
  // x %= y; -> x = x % y

  printf("%d", x);

  return 0;
}