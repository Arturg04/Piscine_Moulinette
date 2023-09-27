#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char str1[] = "hello world!";
	char str2[] = "";
	char str3[] = "abcdefghijklmnopqrstuvwxyz";
	char str4[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str5[] = "1234567890";
	char str6[] = "!@#$%^&*()";
	char str7[10];
	char str8[10];
	char str9[10];
	char str10[10];
	char str11[10];
	char str12[10];

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str4: %s\n", str4);
	printf("str5: %s\n", str5);
	printf("str6: %s\n", str6);

	printf("ft_strlcpy(str7, str1, 10): %d\n", ft_strlcpy(str7, str1, 10));
	printf("str7: %s\n", str7);

	printf("ft_strlcpy(str8, str2, 10): %d\n", ft_strlcpy(str8, str2, 10));
	printf("str8: %s\n", str8);

	printf("ft_strlcpy(str9, str3, 10): %d\n", ft_strlcpy(str9, str3, 10));
	printf("str9: %s\n", str9);

	printf("ft_strlcpy(str10, str4, 10): %d\n", ft_strlcpy(str10, str4, 10));
	printf("str10: %s\n", str10);

	printf("ft_strlcpy(str11, str5, 10): %d\n", ft_strlcpy(str11, str5, 10));
	printf("str11: %s\n", str11);

	printf("ft_strlcpy(str12, str6, 10): %d\n", ft_strlcpy(str12, str6, 10));
	printf("str12: %s\n", str12);

	return (0);
}
