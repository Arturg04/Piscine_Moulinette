#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char str1[] = "hello";
	char str2[] = "";
	char str3[] = "1234567890";

	printf("ft_strlen(str1): %d\n", ft_strlen(str1));
	printf("ft_strlen(str2): %d\n", ft_strlen(str2));
	printf("ft_strlen(str3): %d\n", ft_strlen(str3));

	return (0);
}
