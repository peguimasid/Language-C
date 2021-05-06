#include <stdio.h>
#include <stdlib.h>

int main() {
  int arr[] = {15, 12, 9, 1, 34};

  int big = arr[0];

  for (int i = 1; i < 5; i++) {
    if (arr[i] > big) big = arr[i];
  };

  printf("%d", big);

  return 0;
}