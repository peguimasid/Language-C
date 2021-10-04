#include <stdio.h>
#include <stdlib.h>

int main() {
  int cub[5][5][5];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 5; k++) {
        cub[i][j][k] = i * j * k;
      };
    };
  };

  printf("%d", cub[3][3][2]);  // 18

  return 0;
}