#include <stdio.h>

int	ft_sqrt(int nb);

int main(void)
{
	printf("ft_sqrt(0): %d\n", ft_sqrt(0));
	printf("ft_sqrt(1): %d\n", ft_sqrt(1));
	printf("ft_sqrt(4): %d\n", ft_sqrt(4));
	printf("ft_sqrt(9): %d\n", ft_sqrt(9));
	printf("ft_sqrt(16): %d\n", ft_sqrt(16));
	printf("ft_sqrt(25): %d\n", ft_sqrt(25));
	printf("ft_sqrt(36): %d\n", ft_sqrt(14242534));
	printf("ft_sqrt(49): %d\n", ft_sqrt(12457896));
	printf("ft_sqrt(64): %d\n", ft_sqrt(64));
	printf("ft_sqrt(81): %d\n", ft_sqrt(81));
	printf("ft_sqrt(100): %d\n", ft_sqrt(100000000));

	return (0);
}
