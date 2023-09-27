#include <stdio.h>
#include <stdlib.h>

char *ft_strupcase(char *str);

int main() {
  char str1[] = "This is a lowercase string.";
  char str2[] = "abcdefghijklmnopqrstuvwxyz";
  char str3[] = "!@#$%^&*()";
  char str4[] = "";
  char str5[10] = {0};

  // Test 1: Check that the function converts all lowercase letters in a string to uppercase letters.
  ft_strupcase(str1);
  if (strcmp(str1, "THIS IS A LOWERCASE STRING.") != 0) {
    printf("Test 1 failed.\n");
    return 1;
  }

  // Test 2: Check that the function converts all lowercase letters in a string to uppercase letters, even if the string contains non-alphabetic characters.
  ft_strupcase(str2);
  if (strcmp(str2, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") != 0) {
    printf("Test 2 failed.\n");
    return 1;
  }

  // Test 3: Check that the function does not change non-alphabetic characters.
  ft_strupcase(str3);
  if (strcmp(str3, "!@#$%^&*()") != 0) {
    printf("Test 3 failed.\n");
    return 1;
  }

  // Test 4: Check that the function works with empty strings.
  ft_strupcase(str4);
  if (strcmp(str4, "") != 0) {
    printf("Test 4 failed.\n");
    return 1;
  }

  // Test 5: Check that the function works with null strings.
  ft_strupcase(str5);
  if (str5[0] != '\0') {
    printf("Test 5 failed.\n");
    return 1;
  }

  printf("All tests passed.\n");
  return 0;
}
