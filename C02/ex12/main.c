#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

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

	printf("str1:\n");
	ft_print_memory(str1, sizeof(str1));
	printf("\n");

	printf("str2:\n");
	ft_print_memory(str2, sizeof(str2));
	printf("\n");

	printf("str3:\n");
	ft_print_memory(str3, sizeof(str3));
	printf("\n");

	printf("str4:\n");
	ft_print_memory(str4, sizeof(str4));
	printf("\n");

	printf("str5:\n");
	ft_print_memory(str5, sizeof(str5));
	printf("\n");

	printf("str6:\n");
	ft_print_memory(str6, sizeof(str6));
	printf("\n");

	printf("str7:\n");
	ft_print_memory(str7, sizeof(str7));
	printf("\n");

	printf("str8:\n");
	ft_print_memory(str8, sizeof(str8));
	printf("\n");

	printf("str9:\n");
	ft_print_memory(str9, sizeof(str9));
	printf("\n");

	return (0);
}
