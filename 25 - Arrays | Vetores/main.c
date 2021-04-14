#include <stdio.h>
#include <stdlib.h>

int main() {
  int scores[5];

  scores[0] = 10;
  scores[1] = 5;
  scores[2] = 9;
  scores[3] = 7;
  scores[4] = 4;

  int sum = 0;

  for (int i = 0; i < 5; i++) sum += scores[i];

  int avarage = sum / 5;

  for (int i = 0; i < 5; i++) {
    if (scores[i] >= avarage) printf("%d\n", scores[i]);
  };

  return 0;
}