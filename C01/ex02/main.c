#include <stdlib.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

int main() {
  int a = 10;
  int b = 20;

  // Test 1: Check that the function swaps the values of the passed pointers.
  ft_swap(&a, &b);
  if (a != 20 || b != 10) {
    printf("Test 1 failed.\n");
    return 1;
  }

  // Test 2: Check that the function works with null pointers.
  ft_swap(NULL, NULL);
  if (a != 20 || b != 10) {
    printf("Test 2 failed.\n");
    return 1;
  }

  printf("All tests passed.\n");
  return 0;
}
