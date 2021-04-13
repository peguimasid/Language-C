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
    if (number == 5) continue;
    printf("%d\n", number);
  };

  return 0;
}