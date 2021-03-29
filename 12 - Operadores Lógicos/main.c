#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 10;
  int y = 10;

  printf("%d\n", x == 10 && y == 10);  // Sai 1

  printf("%d\n", x == 10 || y == 20);  // Sai 1

  printf("%d\n", x == 10 && y == 20);  // Sai 0

  // X > 2 sai TRUE(1) mas invertemos com o ! entao sai 0
  printf("%d\n", !(x > 2));

  return 0;
}