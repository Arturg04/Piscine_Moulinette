#include <stdio.h>

void	ft_putstr(char *str);

int main(void)
{
	char str1[] = "hello";
	char str2[] = "";
	char str3[] = "1234567890";

	printf("ft_putstr(str1): ");
	ft_putstr(str1);
	printf("\n");

	printf("ft_putstr(str2): ");
	ft_putstr(str2);
	printf("\n");

	printf("ft_putstr(str3): ");
	ft_putstr(str3);
	printf("\n");

	return (0);
}
