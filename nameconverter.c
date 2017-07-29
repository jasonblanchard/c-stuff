#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isBitISet(unsigned char ch, int i) {
  unsigned char mask = 1 << i;
  return mask & ch;
}

void characterToBinary(char *string, char ch) {
  char output[100];
  output[0] = 0;

  for (int i = 7; i >= 0; i--) {
    bool isBitSet = isBitISet(ch, i);
    strcat(output, isBitSet ? "1" : "0");
  }

  strcat(string, output);
}

int main(int argc, char *argv[]) {
  char binaryOutput[1024];
  char hexOutput[100];
  char decimalOutput[100];
  char *binary;

  for(int i = 0; i < strlen(argv[1]); i++) {
    characterToBinary(binaryOutput, argv[1][i]);
    // strcat(binaryOutput, binary);
    strcat(binaryOutput, "  ");

    char tmpHex[3];
    sprintf(tmpHex, "%x", argv[1][i]);
    strcat(hexOutput, tmpHex);
    strcat(hexOutput, " ");

    char tmpDecimal[4];
    sprintf(tmpDecimal, "%i", argv[1][i]);
    strcat(decimalOutput, tmpDecimal);
    strcat(decimalOutput, " ");
  }

  printf("Name is:     %s\n", argv[1]);
  printf("In decimal:  %s\n", decimalOutput);
  printf("In binary:   %s\n", binaryOutput);
  printf("In hex:      %s\n", hexOutput);

  return 0;
}
