#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 5;

  for (int i = 0; i < number; i++) {
    for (int j = i; j < number; j++) {
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}