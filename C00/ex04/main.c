void	ft_is_negative(int n);

int main(void)
{
    int numbers[] = {5, 0, -10, 100, -100}; // Test with positive, zero, and negative numbers

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        ft_is_negative(numbers[i]);
    }

    return 0;
}
