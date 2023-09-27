#include <stdio.h>
#include <stdlib.h>

void ft_sort_int_tab(int *tab, int size);

int main() {
  int empty_tab[] = {};
  int negative_tab[] = {-1, -2, -3, -4, -5};
  int mixed_tab[] = {1, -2, 3, -4, 5};
  int duplicate_tab[] = {1, 1, 2, 2, 3};
  int large_tab[100000];
  int small_tab[1];
  int odd_tab[] = {1, 2, 3, 4, 5};
  int even_tab[] = {1, 2, 3, 4};
  int null_tab = NULL;

  // Test 1: Check that the function works with an empty array.
  ft_sort_int_tab(empty_tab, 0);

  // Test 2: Check that the function works with an array of negative numbers.
  ft_sort_int_tab(negative_tab, sizeof(negative_tab) / sizeof(int));

  // Test 3: Check that the function works with an array of mixed positive and negative numbers.
  ft_sort_int_tab(mixed_tab, sizeof(mixed_tab) / sizeof(int));

  // Test 4: Check that the function works with an array of duplicate numbers.
  ft_sort_int_tab(duplicate_tab, sizeof(duplicate_tab) / sizeof(int));

  // Test 5: Check that the function works with a large array.
  for (int i = 0; i < 100000; i++) {
    large_tab[i] = i;
  }
  ft_sort_int_tab(large_tab, 100000);

  // Test 6: Check that the function works with a small array.
  ft_sort_int_tab(small_tab, 1);

  // Test 7: Check that the function works with an odd-length array.
  ft_sort_int_tab(odd_tab, sizeof(odd_tab) / sizeof(int));

  // Test 8: Check that the function works with an even-length array.
  ft_sort_int_tab(even_tab, sizeof(even_tab) / sizeof(int));

  // Test 9: Check that the function works with a null array.
  ft_sort_int_tab(null_tab, 0);

  // Check the results of the tests.
  // ...

  return 0;
}
