#include <stdio.h>

int	ft_ten_queens_puzzle(void);

int main(void)
{
	int res;

	res = ft_ten_queens_puzzle();

	printf("There are %d solutions to the 10-queens puzzle.\n", res);

	return (0);
}
