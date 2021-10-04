#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

int main() {
  // Valores que podem ser utilizados no programa mas nao podem ter
  // seu valor alterado

  const int number = 10;

  printf("Number = %d\n", number);
  printf("Number * PI = %f", number * PI);

  return 0;
}