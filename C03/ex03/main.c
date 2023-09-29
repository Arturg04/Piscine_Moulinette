#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char str1[] = "hello";
	char str2[] = "world!";
	char str3[10];

	printf("str1 before: %s\n", str1);
	printf("str2 before: %s\n", str2);
	printf("str3 before: %s\n", str3);

	ft_strncat(str1, str2, 3);

	printf("str1 after: %s\n", str1);
	printf("str2 after: %s\n", str2);
	printf("str3 after: %s\n", str3);

	return (0);
}
