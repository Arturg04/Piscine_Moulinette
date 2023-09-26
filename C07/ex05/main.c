#include <stdio.h>

char	**ft_split(char *str, char *charset);

int main(void)
{
	char *str1 = "Hello, world!";
	char *str2 = "";
	char *str3 = NULL;
	char *str4 = "This,is,a,test.";
	char *str5 = "This,is,a,very,long,test.";

	char *charset1 = " ";
	char *charset2 = "";
	char *charset3 = ",";

	char **res1 = ft_split(str1, charset1);
	char **res2 = ft_split(str2, charset2);
	char **res3 = ft_split(str3, charset3);
	char **res4 = ft_split(str4, charset1);
	char **res5 = ft_split(str5, charset3);

	int i = 0;
	while (res1[i])
	{
		printf("res1[%d]: %s\n", i, res1[i]);
		i++;
	}
	printf("\n");

	i = 0;
	while (res2[i])
	{
		printf("res2[%d]: %s\n", i, res2[i]);
		i++;
	}
	printf("\n");

	i = 0;
	while (res3[i])
	{
		printf("res3[%d]: %s\n", i, res3[i]);
		i++;
	}
	printf("\n");

	i = 0;
	while (res4[i])
	{
		printf("res4[%d]: %s\n", i, res4[i]);
		i++;
	}
	printf("\n");

	i = 0;
	while (res5[i])
	{
		printf("res5[%d]: %s\n", i, res5[i]);
		i++;
	}
	printf("\n");

	free(res1);
	free(res2);
	free(res3);
	free(res4);
	free(res5);

	return (0);
}
