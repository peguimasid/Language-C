#include <stdio.h>
#include <string.h>

int main() {
  char word[] = "my word";

  // strlen - Tamanho da string
  // strcpy - Copiar string
  // strcat - Concatenar duas strings
  // strcmp - Comparar duas strings

  for (int i = 0; i < strlen(word); i++) {
    printf("%c\n", word[i]);
  };

  return 0;
}