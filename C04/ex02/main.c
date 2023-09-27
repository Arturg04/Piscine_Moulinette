#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nb);

int main(void)
{
	printf("ft_putnbr(0): ");
	ft_putnbr(0);
	printf("\n");

	printf("ft_putnbr(1): ");
	ft_putnbr(1);
	printf("\n");

	printf("ft_putnbr(-1): ");
	ft_putnbr(-1);
	printf("\n");

	printf("ft_putnbr(1234567890): ");
	ft_putnbr(1234567890);
	printf("\n");

	printf("ft_putnbr(INT_MAX): ");
	ft_putnbr(INT_MAX);
	printf("\n");

	printf("ft_putnbr(INT_MIN): ");
	ft_putnbr(INT_MIN);
	printf("\n");


	return (0);
}
