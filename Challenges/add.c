#include <stdio.h>

int add(int numOne, int numTwo) {
  return numOne + numTwo;
};

int main() {
  int result = 0;

  int sum = add(1, 3);

  result = sum;

  printf("%d", result);

  return 1;
}