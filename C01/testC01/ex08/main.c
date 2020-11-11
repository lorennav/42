
#include <stdio.h>

void	print_arr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("\n");
}

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int arr_pair[] = {0, 11, 2, 3};
	int arr_odd[] = {0, 11, 2, 3, 4};
	print_arr(arr_pair, 4);
	print_arr(arr_odd, 5);
	ft_sort_int_tab(arr_pair, 4);
	ft_sort_int_tab(arr_odd, 5);
	print_arr(arr_pair, 4);
	print_arr(arr_odd, 5);
	return 0;
}
