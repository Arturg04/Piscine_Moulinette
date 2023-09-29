#include <stdio.h>

int	ft_find_next_prime(int nb);

int main(void)
{
	printf("ft_find_next_prime(0): %d\n", ft_find_next_prime(0));
	printf("ft_find_next_prime(1): %d\n", ft_find_next_prime(1));
	printf("ft_find_next_prime(2): %d\n", ft_find_next_prime(2));
	printf("ft_find_next_prime(3): %d\n", ft_find_next_prime(3));
	printf("ft_find_next_prime(4): %d\n", ft_find_next_prime(4));
	printf("ft_find_next_prime(5): %d\n", ft_find_next_prime(5));
	printf("ft_find_next_prime(6): %d\n", ft_find_next_prime(6));
	printf("ft_find_next_prime(7): %d\n", ft_find_next_prime(7));
	printf("ft_find_next_prime(8): %d\n", ft_find_next_prime(8));
	printf("ft_find_next_prime(9): %d\n", ft_find_next_prime(9));
	printf("ft_find_next_prime(10): %d\n", ft_find_next_prime(10));

	printf("\n");

	printf("ft_find_next_prime(1000000): %d\n", ft_find_next_prime(1000000));
	printf("ft_find_next_prime(10000000): %d\n", ft_find_next_prime(10000000));
	printf("ft_find_next_prime(100000000): %d\n", ft_find_next_prime(100000000));
	printf("ft_find_next_prime(1000000000): %d\n", ft_find_next_prime(1000000000));

	return (0);
}
