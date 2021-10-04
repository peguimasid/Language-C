#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 4;

  switch (number) {
    case 1: {
      printf("O numero é 1");
      break;
    };
    case 2: {
      printf("O numero é 2");
      break;
    };
    case 3: {
      printf("O numero é 3");
      break;
    };
    default:
      printf("O numero não é nunhum dos acima");
  }

  return 0;
}