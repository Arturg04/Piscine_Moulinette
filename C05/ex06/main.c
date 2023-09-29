#include <stdio.h>

int	ft_is_prime(int nb);

int main(void)
{
	printf("ft_is_prime(1): %d\n", ft_is_prime(1));
	printf("ft_is_prime(2): %d\n", ft_is_prime(2));
	printf("ft_is_prime(3): %d\n", ft_is_prime(3));
	printf("ft_is_prime(5): %d\n", ft_is_prime(5));
	printf("ft_is_prime(7): %d\n", ft_is_prime(7));
	printf("ft_is_prime(11): %d\n", ft_is_prime(11));
	printf("ft_is_prime(13): %d\n", ft_is_prime(13));
	printf("ft_is_prime(17): %d\n", ft_is_prime(17));
	printf("ft_is_prime(19): %d\n", ft_is_prime(19));
	printf("ft_is_prime(23): %d\n", ft_is_prime(23));
	printf("ft_is_prime(29): %d\n", ft_is_prime(29));

	return (0);
}
