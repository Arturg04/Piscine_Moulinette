#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char str1[] = "hello";
	char str2[] = "world";
	char str3[] = "hello";

	printf("ft_strncmp(str1, str2, 1): %d\n", ft_strncmp(str1, str2, 1));
	printf("ft_strncmp(str1, str3, 1): %d\n", ft_strncmp(str1, str3, 1));
	printf("ft_strncmp(str2, str3, 1): %d\n", ft_strncmp(str2, str3, 1));

	printf("ft_strncmp(str1, str2, 5): %d\n", ft_strncmp(str1, str2, 5));
	printf("ft_strncmp(str1, str3, 5): %d\n", ft_strncmp(str1, str3, 5));
	printf("ft_strncmp(str2, str3, 5): %d\n", ft_strncmp(str2, str3, 5));

	printf("ft_strncmp(str1, str2, 10): %d\n", ft_strncmp(str1, str2, 10));
	printf("ft_strncmp(str1, str3, 10): %d\n", ft_strncmp(str1, str3, 10));
	printf("ft_strncmp(str2, str3, 10): %d\n", ft_strncmp(str2, str3, 10));

	return (0);
}
