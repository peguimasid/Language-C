#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 0;

beginning:

  if (number < 5) {
    printf("Numero: %d\n", number);
    number++;
    goto beginning;
  };

  return 0;
}