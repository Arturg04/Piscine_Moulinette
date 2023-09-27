void	ft_putnbr(int nb);

#include <unistd.h>

int main(void)
{
    int test_cases[] = {
        -2147483648, // Smallest 32-bit int value
        -12345,      // Negative integer
        0,           // Zero
        42,          // Positive integer
        123456789,   // Large positive integer
        987654321,   // Another large positive integer
        -987654321,  // Large negative integer
        1000000000,  // Maximum positive integer within 32-bit limit
        -1000000000, // Minimum negative integer within 32-bit limit
    };

    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        ft_putnbr(test_cases[i]);
        write(1, "\n", 1); // Print a newline to separate the output
    }

    return 0;
}
