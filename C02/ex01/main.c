#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main() {
  char src[] = "Hello, world!";
  char dest[13];

  // Test 1: Check that the function copies the first n characters of the source string to the destination string.
  ft_strncpy(dest, src, 5);

  if (strcmp(dest, "Hello") != 0) {
    printf("Test 1 failed.\n");
    return 1;
  }

  // Test 2: Check that the function works with empty strings.
  src[0] = '\0';
  dest[0] = '\0';

  ft_strncpy(dest, src, 10);

  if (strcmp(dest, "") != 0) {
    printf("Test 2 failed.\n");
    return 1;
  }

  // Test 3: Check that the function works with strings of different lengths.
  src[0] = 'A';
  src[1] = '\0';

  ft_strncpy(dest, src, 13);

  if (strcmp(dest, "A") != 0) {
    printf("Test 3 failed.\n");
    return 1;
  }

  // Test 4: Check that the function returns the destination string.
  char *ret = ft_strncpy(dest, src, 10);

  if (ret != dest) {
    printf("Test 5 failed.\n");
    return 1;
  }

  printf("All tests passed.\n");
  return 0;
}
