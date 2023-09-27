#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(void)
{
	printf("ft_atoi_base(\"0\", \"0123456789abcdef\"): %d\n", ft_atoi_base("0", "0123456789abcdef"));
	printf("ft_atoi_base(\"1\", \"0123456789abcdef\"): %d\n", ft_atoi_base("1", "0123456789abcdef"));
	printf("ft_atoi_base(\"-1\", \"0123456789abcdef\"): %d\n", ft_atoi_base("-1", "0123456789abcdef"));
	printf("ft_atoi_base(\"1234567890\", \"0123456789abcdef\"): %d\n", ft_atoi_base("1234567890", "0123456789abcdef"));
	printf("ft_atoi_base(\"-9876543210\", \"0123456789abcdef\"): %d\n", ft_atoi_base("-9876543210", "0123456789abcdef"));

	printf("ft_atoi_base(\"0\", \"01\"): %d\n", ft_atoi_base("0", "01"));
	printf("ft_atoi_base(\"1\", \"01\"): %d\n", ft_atoi_base("1", "01"));
	printf("ft_atoi_base(\"-1\", \"01\"): %d\n", ft_atoi_base("-1", "01"));
	printf("ft_atoi_base(\"10\", \"01\"): %d\n", ft_atoi_base("10", "01"));
	printf("ft_atoi_base(\"-11\", \"01\"): %d\n", ft_atoi_base("-11", "01"));

	return (0);
}
