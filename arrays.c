#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int arr[10];
  arr[0] = 0;

  srand(time(NULL));
  int i;
  for(i = 1; i < 10; i++) {
    arr[i] = rand();
  }

  printf("values in array: ");
  for(i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  int arr2[10];
  int *p = arr;
  int *p2 = arr2;

  // using *
  for(i = 0; i < 10; i++) {
    *(p2 + i) = *(p + 9-i);
  }

  printf("\nvalues in second array using *: ");
  for(i = 0; i < 10; i++) {
    printf("%d ", *(p2+i));
  }

  // using []
  for(i = 0; i < 10; i++) {
    arr2[i] = arr[9-i];
  }

  printf("\nvalues in second array using []: ");
  for(i = 0; i < 10; i++) {
    printf("%d ", arr2[i]);
  }

  return 0;
}
