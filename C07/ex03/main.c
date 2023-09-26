#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char *strs1[] = {"Hello", "world!"};
	char *strs2[] = {};
	char *strs3[] = {NULL};
	char *strs4[] = {"This", "is", "a", "test."};
	char *strs5[] = {"This", "is", "a", "very", "long", "test."};

	char *sep1 = " ";
	char *sep2 = "";
	char *sep3 = ",";

	char *res1 = ft_strjoin(2, strs1, sep1);
	char *res2 = ft_strjoin(0, strs2, sep2);
	char *res3 = ft_strjoin(1, strs3, sep3);
	char *res4 = ft_strjoin(4, strs4, sep1);
	char *res5 = ft_strjoin(6, strs5, sep3);

	printf("res1: \"%s\"\n", res1);
	printf("res2: \"%s\"\n", res2);
	printf("res3: \"%s\"\n", res3);
	printf("res4: \"%s\"\n", res4);
	printf("res5: \"%s\"\n", res5);

	free(res1);
	free(res2);
	free(res3);
	free(res4);
	free(res5);

	return (0);
}
