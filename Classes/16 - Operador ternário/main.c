#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = -2;

  bool positive = x > 0 ? true : false;

  printf("%d", positive);

  return 0;
}