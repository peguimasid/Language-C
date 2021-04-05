#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 7;

  if (x > 0) {
    if (x > 5) {
      printf("O valor é maior que 5");
    } else {
      printf("O valor é positivo e menor ou igual a 5");
    }
  } else {
    printf("O valor é negativo");
  }

  return 0;
}