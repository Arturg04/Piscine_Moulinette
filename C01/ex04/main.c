#include <stdlib.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main() {
  int a = 10;
  int b = 3;

  // Test 1: Check that the function calculates the quotient and remainder correctly.
  ft_ultimate_div_mod(&a, &b);
  if (a != 3 || b != 1) {
    printf("Test 1 failed.\n");
    return 1;
  }

  // Test 2: Check that the function works with negative numbers.
  a = -10;
  b = -3;
  ft_ultimate_div_mod(&a, &b);
  if (a != 3 || b != 1) {
    printf("Test 2 failed.\n");
    return 1;
  }

  // Test 3: Check that the function works with zero divisors.
  a = 10;
  b = 0;
  ft_ultimate_div_mod(&a, &b);
  if (a != 0 || b != 10) {
    printf("Test 3 failed.\n");
    return 1;
  }

  printf("All tests passed.\n");
  return 0;
}
