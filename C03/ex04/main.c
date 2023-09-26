#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str1[] = "hello world!";
	char str2[] = "";
	char str3[] = "world!";
	char str4[] = "hello";

	printf("ft_strstr(str1, str2): %s\n", ft_strstr(str1, str2));
	printf("ft_strstr(str1, str3): %s\n", ft_strstr(str1, str3));
	printf("ft_strstr(str1, str4): %s\n", ft_strstr(str1, str4));

	return (0);
}
