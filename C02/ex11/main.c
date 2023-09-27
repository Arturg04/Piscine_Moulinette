#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main(void)
{
	char str1[] = "hello world!";
	char str2[] = "";
	char str3[] = "abcdefghijklmnopqrstuvwxyz";
	char str4[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str5[] = "1234567890";
	char str6[] = "!@#$%^&*()";
	char str7[] = "\n\t\r";
	char str8[] = "\x00\x01\x02";
	char str9[] = "\x7f\x80\x81";

	printf("str1: %s\n", str1);
	printf("ft_putstr_non_printable(str1): ");
	ft_putstr_non_printable(str1);
	printf("\n\n");

	printf("str2: %s\n", str2);
	printf("ft_putstr_non_printable(str2): ");
	ft_putstr_non_printable(str2);
	printf("\n\n");

	printf("str3: %s\n", str3);
	printf("ft_putstr_non_printable(str3): ");
	ft_putstr_non_printable(str3);
	printf("\n\n");

	printf("str4: %s\n", str4);
	printf("ft_putstr_non_printable(str4): ");
	ft_putstr_non_printable(str4);
	printf("\n\n");

	printf("str5: %s\n", str5);
	printf("ft_putstr_non_printable(str5): ");
	ft_putstr_non_printable(str5);
	printf("\n\n");

	printf("str6: %s\n", str6);
	printf("ft_putstr_non_printable(str6): ");
	ft_putstr_non_printable(str6);
	printf("\n\n");

	printf("str7: %s\n", str7);
	printf("ft_putstr_non_printable(str7): ");
	ft_putstr_non_printable(str7);
	printf("\n\n");

	printf("str8: %s\n", str8);
	printf("ft_putstr_non_printable(str8): ");
	ft_putstr_non_printable(str8);
	printf("\n\n");

	printf("str9: %s\n", str9);
	printf("ft_putstr_non_printable(str9): ");
	ft_putstr_non_printable(str9);
	printf("\n\n");

	return (0);
}
