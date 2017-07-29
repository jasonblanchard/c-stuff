#include <stdio.h>

int main() {
  int a = 666;
  int c = 222;
  int *p = &a;
  // printf("%i\n", a);
  // printf("%i\n", *p);
  int *b = p++;
  printf("%i\n", *b);
}
