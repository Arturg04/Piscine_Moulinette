#include <stdio.h>
#include <stdlib.h>

void ft_putstr(char *str);

int main() {
  char *str = "Hello, world!";

  // Test 1: Check that the function prints the string to the standard output.
  ft_putstr(str);
  printf("\n");

  // Test 2: Check that the function works with null strings.
  str = NULL;
  ft_putstr(str);
  printf("\n");

  return 0;
}
