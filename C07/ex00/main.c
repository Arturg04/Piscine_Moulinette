#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int main(void)
{
	char *src1 = "Hello, world!";
	char *src2 = "";
	char *src3 = NULL;
	char *dest1;
	char *dest2;
	char *dest3;

	dest1 = ft_strdup(src1);
	dest2 = ft_strdup(src2);
	dest3 = ft_strdup(src3);

	if (dest1 != NULL)
		printf("ft_strdup(\"%s\"): \"%s\"\n", src1, dest1);
	if (dest2 != NULL)
		printf("ft_strdup(\"%s\"): \"%s\"\n", src2, dest2);
	if (dest3 != NULL)
		printf("ft_strdup(\"%s\"): \"%s\"\n", src3, dest3);


	char *src4 = "This is a very long string.";
	char *src5 = "This is a string with special characters: @!#$^&*()_+";
	char *src6 = "This is a string with spaces.";

	char *dest4;
	char *dest5;
	char *dest6;

	dest4 = ft_strdup(src4);
	dest5 = ft_strdup(src5);
	dest6 = ft_strdup(src6);

	if (dest4 != NULL)
		printf("ft_strdup(\"%s\"): \"%s\"\n", src4, dest4);
	if (dest5 != NULL)
		printf("ft_strdup(\"%s\"): \"%s\"\n", src5, dest5);
	if (dest6 != NULL)
		printf("ft_strdup(\"%s\"): \"%s\"\n", src6, dest6);


	return (0);
}
