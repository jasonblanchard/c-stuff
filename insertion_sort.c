#include <stdio.h>
#include <stdlib.h>

#define array_length(arr) (sizeof(arr) == 0 ? 0	: sizeof (arr) / sizeof((arr)[0]))

void swap(int *array, int i, int j) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

// void insertion_sort(int *array, int size) {
//   for (int i = 0; i < size; i++) {
//     int j = i - 1;
//     while (j >= 0) {
//       if (array[j + 1] < array[j]) {
//         swap(array, j, j + 1);
//       }
//       j--;
//     }
//   }
// }

// Using pointer arithmatic.
void insertion_sort(int *array, int size) {
  int *i;
  int *end = array + size;
  for (i = array; i < end; i++) {
    int *j = i - 1;
    while(j >= array) {
      if (*(j + 1) < *j) {
        int tmp = *(j + 1);
        *(j + 1) = *j;
        *j = tmp;
      }
      j--;
    }
  }
}

int main(int argc, char *argv[]) {
  int *array;
  int size = atoi(argv[1]);
  int i;
  char buffer[5];

  array = malloc(size * sizeof(int));
  for(i = 0; i < size; i++) {
    fgets(buffer, size, stdin);
    array[i] = atoi(buffer);
  }

  // int array[6] = { 5, 3, 6, 13, 65, 22 };
  // int length = array_length(array);

  insertion_sort(array, size);
  for (int i = 0; i < size; i++) {
    printf("%i\n", array[i]);
  }

  free(array);
  return 0;
}
