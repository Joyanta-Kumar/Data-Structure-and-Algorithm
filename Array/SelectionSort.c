#include <stdio.h>
#define len 10

int main()
{
  int arr[len] = { 2, 1, 0, 3, 4, 6, 5, 9, 8, 7 };

  for (unsigned int currentIndex = 0; currentIndex < len; currentIndex++) {
    int indexOfSmallest = currentIndex;
    // check if smaller exist.
    for (unsigned checkingIndex = currentIndex; checkingIndex < len; checkingIndex++) {
      if (arr[checkingIndex] < arr[indexOfSmallest]) {
        indexOfSmallest = checkingIndex;
      }
    }
    int temp = arr[indexOfSmallest];
    for (indexOfSmallest; indexOfSmallest > currentIndex; indexOfSmallest--) {
      arr[indexOfSmallest] = arr[indexOfSmallest-1];
    }
    arr[currentIndex] = temp;
  }

  for (unsigned int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}