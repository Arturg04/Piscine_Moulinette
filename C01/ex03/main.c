#include <stdlib.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main() {
  int a = 10;
  int b = 3;
  int div;
  int mod;

  // Test 1: Check that the function calculates the quotient and remainder correctly.
  ft_div_mod(a, b, &div, &mod);
  if (div != 3 || mod != 1) {
    printf("Test 1 failed.\n");
    return 1;
  }

  // Test 2: Check that the function works with negative numbers.
  a = -10;
  b = -3;
  div = 0;
  mod = 0;
  ft_div_mod(a, b, &div, &mod);
  if (div != 3 || mod != 1) {
    printf("Test 2 failed.\n");
    return 1;
  }

  // Test 3: Check that the function works with zero divisors.
  a = 10;
  b = 0;
  div = 0;
  mod = 0;
  ft_div_mod(a, b, &div, &mod);
  if (div != 0 || mod != 10) {
    printf("Test 3 failed.\n");
    return 1;
  }

  printf("All tests passed.\n");
  return 0;
}
