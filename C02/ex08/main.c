#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str1[] = "HELLO WORLD!";
	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	char str3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str4[] = "1234567890";
	char str5[] = "!@#$%^&*()";

	printf("str1 before: %s\n", str1);
	printf("str1 after: %s\n", ft_strlowcase(str1));
	printf("str2 before: %s\n", str2);
	printf("str2 after: %s\n", ft_strlowcase(str2));
	printf("str3 before: %s\n", str3);
	printf("str3 after: %s\n", ft_strlowcase(str3));
	printf("str4 before: %s\n", str4);
	printf("str4 after: %s\n", ft_strlowcase(str4));
	printf("str5 before: %s\n", str5);
	printf("str5 after: %s\n", ft_strlowcase(str5));

	return (0);
}
