#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int *arr1;
	int *arr2;
	int *arr3;
	int *arr4;
	int *arr5;
	int *arr6;
	int *arr7;
	int *arr8;
	int *arr9;
	int *arr10;

	int len1 = ft_ultimate_range(&arr1, 0, 10);
	int len2 = ft_ultimate_range(&arr2, 10, 0);
	int len3 = ft_ultimate_range(&arr3, -10, 10);
	int len4 = ft_ultimate_range(&arr4, 10, 11);
	int len5 = ft_ultimate_range(&arr5, 10, 20);
	int len6 = ft_ultimate_range(&arr6, 10, 30);
	int len7 = ft_ultimate_range(&arr7, 10, 10);
	int len8 = ft_ultimate_range(&arr8, 10, 9);
	int len9 = ft_ultimate_range(&arr9, 10, 8);
	int len10 = ft_ultimate_range(&arr10, 10, 7);

	printf("arr1: ");
	for (int i = 0; i < len1; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	printf("arr2: ");
	for (int i = len2 - 1; i >= 0; i--)
		printf("%d ", arr2[i]);
	printf("\n");

	printf("arr3: ");
	for (int i = -10; i < len3; i++)
		printf("%d ", arr3[i]);
	printf("\n");

	printf("arr4: %p\n", arr4);
	printf("arr5: ");
	for (int i = 10; i < len5; i++)
		printf("%d ", arr5[i]);
	printf("\n");

	printf("arr6: ");
	for (int i = 10; i < len6; i++)
		printf("%d ", arr6[i]);
	printf("\n");

	printf("arr7: %p\n", arr7);
	printf("arr8: %p\n", arr8);
	printf("arr9: %p\n", arr9);
	printf("arr10: %p\n", arr10);

	free(arr1);
	free(arr2);
	free(arr3);
	free(arr4);
	free(arr5);
	free(arr6);
	free(arr7);
	free(arr8);
	free(arr9);
	free(arr10);

	return (0);
}
