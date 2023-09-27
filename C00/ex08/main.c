void	ft_print_combn(int n);

#include <unistd.h>

int main(void)
{
    int n_values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Test with different values of n

    for (int i = 0; i < sizeof(n_values) / sizeof(n_values[0]); i++) {
        ft_print_combn(n_values[i]);
        write(1, "\n", 1); // Print a newline to separate the output
    }

    return 0;
}
