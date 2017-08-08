#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i;
  int limit = atoi(argv[1]);
  int seed = argv[2] ? atoi(argv[2]) : 1;
  srand(seed);

  for(i = 1; i <= limit; i++) {
    printf("%i\n", rand() % 1000);
  }
}
