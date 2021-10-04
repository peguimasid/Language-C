#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 2;

  do {
    printf("%d\n", number);
    number++;
  } while (number < 10);

  return 0;
}