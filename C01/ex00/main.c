#include <stdio.h>

void ft_ft(int *nbr);

int main() {
  int nbr = 0;

  // Test 1: Check that the function sets the value of the passed pointer to 42.
  ft_ft(&nbr);
  if (nbr != 42) {
    printf("Test 1 failed.\n");
    return 1;
  }

  printf("All tests passed.\n");
  return 0;
}
