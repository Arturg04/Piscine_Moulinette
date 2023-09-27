#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char str1[] = "hello world!";
	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	char str3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str4[] = "1234567890";
	char str5[] = "!@#$%^&*()";
	char str6[] = " hello world! ";
	char str7[] = "hello-world!";
	char str8[] = "hello+world!";
	char str9[] = "hello world! 123";
	char str10[] = "hello world! !@#$%^&*()";
	char str11[] = "  hello world!  ";
	char str12[] = "hello--world!";
	char str13[] = "hello++world!";
	char str14[] = "hello world! 123 456";
	char str15[] = "hello world! !@#$%^&*() 123 456";

	printf("str1 before: %s\n", str1);
	printf("str1 after: %s\n", ft_strcapitalize(str1));
	printf("str2 before: %s\n", str2);
	printf("str2 after: %s\n", ft_strcapitalize(str2));
	printf("str3 before: %s\n", str3);
	printf("str3 after: %s\n", ft_strcapitalize(str3));
	printf("str4 before: %s\n", str4);
	printf("str4 after: %s\n", ft_strcapitalize(str4));
	printf("str5 before: %s\n", str5);
	printf("str5 after: %s\n", ft_strcapitalize(str5));
	printf("str6 before: %s\n", str6);
	printf("str6 after: %s\n", ft_strcapitalize(str6));
	printf("str7 before: %s\n", str7);
	printf("str7 after: %s\n", ft_strcapitalize(str7));
	printf("str8 before: %s\n", str8);
	printf("str8 after: %s\n", ft_strcapitalize(str8));
	printf("str9 before: %s\n", str9);
	printf("str9 after: %s\n", ft_strcapitalize(str9));
	printf("str10 before: %s\n", str10);
	printf("str10 after: %s\n", ft_strcapitalize(str10));
	printf("str11 before: %s\n", str11);
	printf("str11 after: %s\n", ft_strcapitalize(str11));
	printf("str12 before: %s\n", str12);
	printf("str12 after: %s\n", ft_strcapitalize(str12));
	printf("str13 before: %s\n", str13);
	printf("str13 after: %s\n", ft_strcapitalize(str13));
	printf("str14 before: %s\n", str14);
	printf("str14 after: %s\n", ft_strcapitalize(str14));
	printf("str15 before: %s\n", str15);
	printf("str15 after: %s\n", ft_strcapitalize(str15));

	return (0);
}
