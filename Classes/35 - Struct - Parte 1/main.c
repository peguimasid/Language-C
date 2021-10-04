# include <stdio.h>
# include <stdlib.h>

struct myStruct {
  int age;
  int height;
  char name[];
};

int main() {
  // A linguagem c nos permite criar nossas próprias estruras de dados
  struct myStruct people;

  char currName[] = "Guilhermo";

  people.age = 12;

  printf("%d", people.age);

  return 0;
}