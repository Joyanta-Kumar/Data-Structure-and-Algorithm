#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define len 20

int main()
{
  srand(time(NULL));
  int arr[len];
  printf("Original: ");
  for (unsigned int i = 0; i < len; i++) {
    arr[i] = rand() % 100;
    printf("%02d ", arr[i]);
  }


  for (unsigned int i = 0; i < len; i++) {
    char sorted = 1;
    for (unsigned int j = 0; j < len-1-i; j++) {
      for (unsigned int k = 0; k < j; k++) {
        // printf("%d ", arr[k]);
      }
      char inOrder = arr[j] < arr[j+1];
      // printf("\e[1;44m[ %d %d ]\e[0m ", arr[j], arr[j+1]);
      if (!inOrder) {
        sorted = 0;
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
      for (unsigned int k = j+2; k < len; k++) {
        if (k > len-i-1) {
          // printf("\e[2m");
        }
        // printf("%d ", arr[k]);
        // printf("\e[0m");
      }
      // printf("\r");
    }
    if (sorted == 1) {
      break;
    }
  }

  printf("\nSorted:   ");
  for (unsigned int i = 0; i < len; i++) {
    printf("%02d ", arr[i]);
  }

  return 0;
}