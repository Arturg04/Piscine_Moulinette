#include <stdio.h>
#include <stdlib.h>

int ft_str_is_alpha(char *str);

int main() {
  char *str1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *str2 = "1234567890";
  char *str3 = "!@#$%^&*()";

  // Test 1: Check that the function returns 1 for a string that contains only alphabetic characters.
  if (ft_str_is_alpha(str1) != 1) {
    printf("Test 1 failed.\n");
    return 1;
  }

  // Test 2: Check that the function returns 0 for a string that contains non-alphabetic characters.
  if (ft_str_is_alpha(str2) != 0) {
    printf("Test 2 failed.\n");
    return 1;
  }

  // Test 3: Check that the function returns 0 for an empty string.
  if (ft_str_is_alpha("") != 0) {
    printf("Test 3 failed.\n");
    return 1;
  }

  // Test 4: Check that the function returns 0 for a null string.
  if (ft_str_is_alpha(NULL) != 0) {
    printf("Test 4 failed.\n");
    return 1;
  }

  printf("All tests passed.\n");
  return 0;
}
