#include <stdio.h>
#include <stdlib.h>

int ft_str_is_uppercase(char *str);

int main() {
  char *str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *str2 = "abcdefghijklmnopqrstuvwxyz";
  char *str3 = "1234567890";
  char *str4 = "!@#$%^&*()";

  // Test 1: Check that the function returns 1 for a string that contains only uppercase characters.
  if (ft_str_is_uppercase(str1) != 1) {
    printf("Test 1 failed.\n");
    return 1;
  }

  // Test 2: Check that the function returns 0 for a string that contains non-uppercase characters.
  if (ft_str_is_uppercase(str2) != 0) {
    printf("Test 2 failed.\n");
    return 1;
  }

  // Test 3: Check that the function returns 0 for a string that contains non-alphabetic characters.
  if (ft_str_is_uppercase(str3) != 0) {
    printf("Test 3 failed.\n");
    return 1;
  }

  // Test 4: Check that the function returns 0 for an empty string.
  if (ft_str_is_uppercase("") != 0) {
    printf("Test 4 failed.\n");
    return 1;
  }

  // Test 5: Check that the function returns 0 for a null string.
  if (ft_str_is_uppercase(NULL) != 0) {
    printf("Test 5 failed.\n");
    return 1;
  }

  printf("All tests passed.\n");
  return 0;
}
