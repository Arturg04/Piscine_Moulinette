void	ft_putchar(char c);

int main(void)
{
    char character;

    // Test lowercase letters
    for (character = 'a'; character <= 'z'; character++) {
        ft_putchar(character);
    }

    // Test uppercase letters
    for (character = 'A'; character <= 'Z'; character++) {
        ft_putchar(character);
    }

    // Test digits
    for (character = '0'; character <= '9'; character++) {
        ft_putchar(character);
    }

    // Test special characters
    ft_putchar('@');
    ft_putchar('#');
    ft_putchar('$');
    ft_putchar('%');
    ft_putchar('&');
    ft_putchar('*');

    // Test newline and tab
    ft_putchar('\n');
    ft_putchar('\t');

    return 0;
}
