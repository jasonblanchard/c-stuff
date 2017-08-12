#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int isFerocious;
  int numPeople;
  char flag;

  while((flag = getopt(argc, argv, "fp:")) != EOF) {
    switch(flag) {
      case 'f':
        isFerocious = 1;
        break;
      case 'p':
        numPeople = atoi(optarg);
        break;
      default:
        fprintf(stderr, "%s\n", "That's not a valid argument");
    }
  }

  argc -= optind;
  argv += optind;

  isFerocious ? printf("%s", "Arguing ferociously about ") : printf("%s", "Arguring about ");

  for(int i = 0; i < argc; i++) {
    printf("%s ", argv[i]);
  }

  if (numPeople) {
    printf("with %d people", numPeople);
  }

  printf("\n");
}
