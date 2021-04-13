#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 0;
  bool foundNumber = false;

  // Comando BREAK: Sai do laço
  // Comando CONTINUE: Interrompe o laço e vai pro proximo

  while (number < 10) {
    number++;
    if (number == 5) continue;  // se o numero for 5 ele ignora aquele passagem
    printf("%d\n", number);     // Vai printar tudo de 0 a 10 menos o 5
  };

  return 0;
}