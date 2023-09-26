#include <stdlib.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main() {
  int a = 0;
  int *b = &a;
  int **c = &b;
  int ***d = &c;
  int ****e = &d;
  int *****f = &e;
  int ******g = &f;
  int *******h = &g;
  int ********i = &h;

  // Test 1: Check that the function sets the value of the passed pointer to 42.
  ft_ultimate_ft(&i);
  if (*i != 42) {
    printf("Test 1 failed.\n");
    return 1;
  }

  // Test 2: Check that the function works with null pointers.
  ft_ultimate_ft(NULL);
  if (*i != 42) {
    printf("Test 2 failed.\n");
    return 1;
  }

  printf("All tests passed.\n");
  return 0;
}
