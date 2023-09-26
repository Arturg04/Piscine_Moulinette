#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	printf("ft_putnbr_base(0, \"0123456789abcdef\"): ");
	ft_putnbr_base(0, "0123456789abcdef");
	printf("\n");

	printf("ft_putnbr_base(1, \"0123456789abcdef\"): ");
	ft_putnbr_base(1, "0123456789abcdef");
	printf("\n");

	printf("ft_putnbr_base(-1, \"0123456789abcdef\"): ");
	ft_putnbr_base(-1, "0123456789abcdef");
	printf("\n");

	printf("ft_putnbr_base(1234567890, \"0123456789abcdef\"): ");
	ft_putnbr_base(1234567890, "0123456789abcdef");
	printf("\n");

	printf("ft_putnbr_base(-9876543210, \"0123456789abcdef\"): ");
	ft_putnbr_base(-9876543210, "0123456789abcdef");
	printf("\n");

	printf("ft_putnbr_base(0, \"01\"): ");
	ft_putnbr_base(0, "01");
	printf("\n");

	printf("ft_putnbr_base(1, \"01\"): ");
	ft_putnbr_base(1, "01");
	printf("\n");

	printf("ft_putnbr_base(-1, \"01\"): ");
	ft_putnbr_base(-1, "01");
	printf("\n");

	printf("ft_putnbr_base(1234567890, \"01\"): ");
	ft_putnbr_base(1234567890, "01");
	printf("\n");

	printf("ft_putnbr_base(-9876543210, \"01\"): ");
	ft_putnbr_base(-9876543210, "01");
	printf("\n");

	return (0);
}
