#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char str1[] = "hello";
	char str2[] = "world";
	char str3[] = "hello";

	printf("ft_strcmp(str1, str2): %d\n", ft_strcmp(str1, str2));
	printf("ft_strcmp(str1, str3): %d\n", ft_strcmp(str1, str3));
	printf("ft_strcmp(str2, str3): %d\n", ft_strcmp(str2, str3));

	return (0);
}
