#include <stdio.h>
#include <stdlib.h>

int main() {
  int mat[5][3];  // 5 linhas 3 colunas

  mat[3][2] = 2;  // linha 4 coluna 3 = 2
  // [][][]
  // [][][]
  // [][][]
  // [][][2]
  // [][][]

  mat[1][0] = 10;  // linha 2 coluna 1 = 10
  // [][][]
  // [10][][]
  // [][][]
  // [][][2]
  // [][][]

  printf("%d\n", mat[3][2]);
  printf("%d\n", mat[1][0]);

  return 0;
}