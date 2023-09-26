#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);

int main() {
  char *str = "Hello, world!";

  // Test 1: Check that the function returns the correct length of the string.
  printf("The length of the string is: %d\n", ft_strlen(str));

  // Test 2: Check that the function works with null strings.
  str = NULL;
  printf("The length of the string is: %d\n", ft_strlen(str));

  return 0;
}
