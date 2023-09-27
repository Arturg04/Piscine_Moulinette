#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);

int main() {
  char *str = "Hello, world!";
  char *str1 = "";
  char *str2 = "123$#%";
  char *str3 = "Hellp!";

  // Test 1: Check that the function returns the correct length of the string.
  printf("The length of the string is: %d\n", ft_strlen(str));
  printf("The length of the string is: %d\n", ft_strlen(str1));
  printf("The length of the string is: %d\n", ft_strlen(str2));
  printf("The length of the string is: %d\n", ft_strlen(str3));

//   // Test 2: Check that the function works with null strings.
//   str = NULL;
//   printf("The length of the string is: %d\n", ft_strlen(str));

  return 0;
}
