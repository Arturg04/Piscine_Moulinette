#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	char *str1 = "12345";
	char *str2 = "-12345";
	char *str3 = "10000";
	char *str4 = "-10000";
	char *str5 = "1234567890ABCDEF";
	char *str6 = "-1234567890ABCDEF";

	char *base1 = "0123456789";
	char *base2 = "ABCDEF";
	char *base3 = "01";
	char *base4 = "0011";

	char *res1 = ft_convert_base(str1, base1, base2);
	char *res2 = ft_convert_base(str2, base1, base2);
	char *res3 = ft_convert_base(str3, base1, base3);
	char *res4 = ft_convert_base(str4, base1, base3);
	char *res5 = ft_convert_base(str5, base1, base4);
	char *res6 = ft_convert_base(str6, base1, base4);

	printf("res1: %s\n", res1);
	printf("res2: %s\n", res2);
	printf("res3: %s\n", res3);
	printf("res4: %s\n", res4);
	printf("res5: %s\n", res5);
	printf("res6: %s\n", res6);

	free(res1);
	free(res2);
	free(res3);
	free(res4);
	free(res5);
	free(res6);

	return (0);
}
