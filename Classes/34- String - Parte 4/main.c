#include <stdio.h>
#include <string.h>

int main() {
  char word[] = "Linguagem";
  char vogais[10] = "aeiouAEIOU";

  int result = 0;

  for (int i = 0; i < strlen(word); i++) {
    char wordChar = word[i];

    for (int j = 0; j < 10; j++) {
      if (wordChar == vogais[j]) result++;
    }
  }

  printf("%d", result);

  return 0;
}