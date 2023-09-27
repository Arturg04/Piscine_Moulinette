#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char *strs1[] = {"Hello", "world!"};
	char *strs4[] = {"This", "is", "a", "test."};
	char *strs5[] = {"This", "is", "a", "very", "long", "test."};

	char *sep1 = " ";
	char *sep2 = "";
	char *sep3 = ",";

	char *res1 = ft_strjoin(2, strs1, sep1);
	char *res4 = ft_strjoin(4, strs4, sep1);
	char *res5 = ft_strjoin(6, strs5, sep3);

	printf("res1: \"%s\"\n", res1);
	printf("res4: \"%s\"\n", res4);
	printf("res5: \"%s\"\n", res5);

	return (0);
}
