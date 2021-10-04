#include <stdio.h>
#include <math.h>

int centuryFromYear(double year) {
  return ceil(year / 100);
}

int main() {
  printf("%d\n", centuryFromYear(1905));
  printf("%d", centuryFromYear(1700));

  return 1;
}