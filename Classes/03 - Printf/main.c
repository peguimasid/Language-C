#include <stdio.h>
#include <stdlib.h>

int main() {
  char letter = 'a';
  int number = 10;
  float n = 5.25;

  printf("%c\n", letter);  // -> c = caractere
  printf("%d\n",
         letter);          // -> valor numerico daquela letra na tabela ascii
  printf("%d\n", number);  // ->  d = numero inteiro
  printf("%f\n", n);       // -> f = numero real

  return 0;
}