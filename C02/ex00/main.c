#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src);

int main() {
  char src[] = "Hello, world!";
  char dest[13];

  // Test 1: Check that the function copies the source string to the destination string.
  ft_strcpy(dest, src);

  if (strcmp(dest, src) != 0) {
    printf("Test 1 failed.\n");
  }

  // Test 2: Check that the function works with empty strings.
  src[0] = '\0';
  dest[0] = '\0';

  ft_strcpy(dest, src);

  if (strcmp(dest, src) != 0) {
    printf("Test 2 failed.\n");
  }

  // Test 3: Check that the function works with strings of different lengths.
  src[0] = 'A';
  src[1] = '\0';

  ft_strcpy(dest, src);

  if (strcmp(dest, src) != 0) {
    printf("Test 3 failed.\n");
  }

  // Test 4: Check that the function returns the destination string.
  char *ret = ft_strcpy(dest, src);

  if (ret != dest) {
    printf("Test 5 failed.\n");
  }
}
