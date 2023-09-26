#include <stdio.h>
#include <stdlib.h>

int ft_str_is_printable(char *str);

int main() {
  char *str1 = "This is a printable string.";
  char *str2 = "!@#$%^&*()";
  char *str3 = "\n\t\r";
  char *str4 = "";
  char *str5 = NULL;

  // Test 1: Check that the function returns 1 for a string that contains only printable characters.
  if (ft_str_is_printable(str1) != 1) {
    printf("Test 1 failed.\n");
    return 1;
  }

  // Test 2: Check that the function returns 1 for a string that contains only non-printable characters.
  if (ft_str_is_printable(str2) != 1) {
    printf("Test 2 failed.\n");
    return 1;
  }

  // Test 3: Check that the function returns 1 for a string that contains only whitespace characters.
  if (ft_str_is_printable(str3) != 1) {
    printf("Test 3 failed.\n");
    return 1;
  }

  // Test 4: Check that the function returns 1 for an empty string.
  if (ft_str_is_printable(str4) != 1) {
    printf("Test 4 failed.\n");
    return 1;
  }

  // Test 5: Check that the function returns 0 for a null string.
  if (ft_str_is_printable(str5) != 0) {
    printf("Test 5 failed.\n");
    return 1;
  }

  printf("All tests passed.\n");
  return 0;
}
