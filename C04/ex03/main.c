#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
	printf("ft_atoi(\"0\"): %d\n", ft_atoi("0"));
	printf("ft_atoi(\"1\"): %d\n", ft_atoi("1"));
	printf("ft_atoi(\"-1\"): %d\n", ft_atoi("-1"));
	printf("ft_atoi(\"1234567890\"): %d\n", ft_atoi("1234567890"));
	printf("ft_atoi(\"-9876543210\"): %d\n", ft_atoi("-9876543210"));

	printf("ft_atoi(\"  0\"): %d\n", ft_atoi("  0"));
	printf("ft_atoi(\"  1\"): %d\n", ft_atoi("  1"));
	printf("ft_atoi(\"  -1\"): %d\n", ft_atoi("  -1"));
	printf("ft_atoi(\"  1234567890\"): %d\n", ft_atoi("  1234567890"));
	printf("ft_atoi(\"  -9876543210\"): %d\n", ft_atoi("  -9876543210"));

	printf("ft_atoi(\"+0\"): %d\n", ft_atoi("+0"));
	printf("ft_atoi(\"+1\"): %d\n", ft_atoi("+1"));
	printf("ft_atoi(\"-0\"): %d\n", ft_atoi("-0"));
	printf("ft_atoi(\"-1\"): %d\n", ft_atoi("-1"));

	printf("ft_atoi(\"abc123\"): %d\n", ft_atoi("abc123"));
	printf("ft_atoi(\"-abc123\"): %d\n", ft_atoi("-abc123"));


	return (0);
}
