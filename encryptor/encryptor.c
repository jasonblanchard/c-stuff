#include "encrypt.h"
#include <stdio.h>

int main() {
  char message[80];
  printf("%s", "Enter a message: ");
  fgets(message, sizeof(message), stdin);
  encrypt(message);
  printf("\nYour encrypted message is: %s\n", message);
}
