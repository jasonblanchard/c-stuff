#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isBitISet( unsigned char ch, int i ) {
  unsigned char mask = 1 << i;
  return mask & ch;
}

int main() {
  char ch = 'A';
  char str[10];
  printf("The character is: %c\n", ch);
  for (int i = 7; i >= 0; i--) {
    bool isBitSet = isBitISet(ch, i);
    strcat(str, isBitSet ? "1" : "0");
  }

  printf("The result in binary is: %s\n", str);
  printf("In decimal, this is: %i\n", ch);
  printf("In hex, this is: %x\n", ch);
  return 0;
}
