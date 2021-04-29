#include <stdio.h>
#include <stdlib.h>

int main() {
  int vet[5] = {15, 12, 9, 1, 34};
  int arr[] = {15, 12, 9, 1, 34};

  int mat[][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // 5 linhas 2 colunas cada

  int matrizExempleOne[2][3] = {1, 2, 3, 4, 5, 6};
  int matrizExempleTwo[2][3] = {{1, 2, 3}, {4, 5, 6}};

  printf("%d", arr[3]);  // 1

  return 0;
}