#include <stdio.h>
#include <stdlib.h>

int main() {
  int arr[] = {15, 12, 9, 1, 34};

  int sum = 0;

  for (int i = 0; i < 5; i++) {
    sum += arr[i];
  };

  printf("%d", sum);

  return 0;
}