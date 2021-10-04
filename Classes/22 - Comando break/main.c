#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 0;
  int numberToFind = 101;
  bool foundNumber = false;

  while (true) {
    if (foundNumber) return printf("Found it");

    if (number == 100 && !foundNumber) {
      printf("Number not found");
      break;
    };
    if (number == numberToFind) foundNumber = true;

    number++;
  };

  return 0;
}