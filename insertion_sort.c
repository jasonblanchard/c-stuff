#include <stdio.h>

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
      if (*i < *j) {
        int tmp = *i;
        *i = *j;
        *j = tmp;
      }
      j--;
    }
  }
}

int main() {
  // TODO: Read array in from stdin
  int array[6] = { 5, 3, 6, 13, 65, 22 };
  int length = array_length(array);
  insertion_sort(array, length);
  for (int i = 0; i < length; i++) {
    printf("%i\n", array[i]);
  }
  return 0;
}
