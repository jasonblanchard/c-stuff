#include <stdio.h>

#define array_length(arr) (sizeof(arr) == 0 ? 0	: sizeof (arr) / sizeof((arr)[0]))

int *linear_search(int *source, int val) {
  int *i;
  int *end = i + sizeof(source);
  for (i = source; i < end; i++) {
    if (*i == val) {
      printf("%i\n", *i);
      return i;
    }
  }

  return NULL;
}

int main() {
  int input[6] = { 5, 3, 6, 13, 65, 22 };
  int *output = linear_search(input, 5);
  printf("%p\n", output);

  return 0;
}
