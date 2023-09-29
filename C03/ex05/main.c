#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char str1[] = "hello";
	char str2[] = "world!";
	char str3[10];
	unsigned int size;

	size = 10;
	printf("ft_strlcat(str3, str1, size): %d\n", ft_strlcat(str3, str1, size));
	printf("str3 after: %s\n", str3);

	size = 10;
	printf("ft_strlcat(str3, str2, size): %d\n", ft_strlcat(str3, str2, size));
	printf("str3 after: %s\n", str3);

	size = 5;
	printf("ft_strlcat(str3, str2, size): %d\n", ft_strlcat(str3, str2, size));
	printf("str3 after: %s\n", str3);

	return (0);
}
