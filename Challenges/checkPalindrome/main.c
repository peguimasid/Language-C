#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool checkPalindrome(char * inputString) {
  bool result = true;

  for(int i = 0; i < strlen(inputString); i++) {
    char currentChar = inputString[i];
    char mirrorChar = inputString[strlen(inputString) - i - 1];

    if(currentChar != mirrorChar) return false;
  };

  return result;
}

int main() {
  printf("%d\n", checkPalindrome("abb"));

  return 1;
}