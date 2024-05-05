#include "sort.h"

/**
 * selection_sort - sort array of integers in ascending order
 * using selection sort algorithm
 * @array: given array to be sorted
 * @size: of the arry
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_val, temp, flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		min_val = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_val]  > array[j])
			{
				min_val = j;
				flag = 1;
			}
		}
		if (flag)
		{
			temp = array[i];
			array[i] = array[min_val];
			array[min_val] = temp;
			print_array(array, size);
		}
	}
}
