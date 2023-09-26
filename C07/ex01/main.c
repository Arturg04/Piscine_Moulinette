#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

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

	arr1 = ft_range(0, 10);
	arr2 = ft_range(10, 0);
	arr3 = ft_range(-10, 10);
	arr4 = ft_range(10, 11);
	arr5 = ft_range(10, 20);
	arr6 = ft_range(10, 30);
	arr7 = ft_range(10, 10);
	arr8 = ft_range(10, 9);
	arr9 = ft_range(10, 8);
	arr10 = ft_range(10, 7);

	if (arr1 != NULL)
{	printf("arr1: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr1[i]);
	printf("\n");}
if (arr2 != NULL)
{	printf("arr2: ");
	for (int i = 9; i >= 0; i--)
		printf("%d ", arr2[i]);
	printf("\n");}
if (arr3 != NULL)
{	printf("arr3: ");
	for (int i = -10; i < 10; i++)
		printf("%d ", arr3[i]);
	printf("\n");}
if (arr4 != NULL)
	printf("arr4: %p\n", arr4);
if (arr5 != NULL)
{	printf("arr5: ");
	for (int i = 10; i < 20; i++)
		printf("%d ", arr5[i]);
	printf("\n");}
if (arr6 != NULL)
{	printf("arr6: ");
	for (int i = 10; i < 30; i++)
		printf("%d ", arr6[i]);
	printf("\n");}
	if (arr7 != NULL)
		printf("arr7: %p\n", arr7);
	if (arr8 != NULL)
		printf("arr8: %p\n", arr8);
	if (arr9 != NULL)
		printf("arr9: %p\n", arr9);
	if (arr10 != NULL)
		printf("arr10: %p\n", arr10);

	return (0);
}
