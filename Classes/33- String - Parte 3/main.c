#include <stdio.h>
#include <string.h>

int main() {
  char word[20] = "my word";
  char wordReversed[20] = "";

  int j = 0;

  for (int i = strlen(word) - 1; i >= 0; i--) {
    wordReversed[j] = word[i];
    j++;
  };

  puts(wordReversed);

  return 0;
}