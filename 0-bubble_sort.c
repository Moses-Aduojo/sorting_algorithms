#include "sort.h"

/**
 * swap - swap two array element given their index position
 * @arr: the given array
 * @i: first index position
 * @j: second index position
 */
void swap(int *arr, int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}


/**
 * bubble_sort - sort a given array in ascending order
 * @array: the given array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;

	size_t j;
	size_t k = 0;
	int counter;

	while (k < size)
	{
		counter = 0;

		for (i = 0; i < size - 1; i++)
		{
			j = i + 1;

			if (array[i] > array[j])
			{
				swap(array, i, j);
				print_array(array, size);
				counter++;
			}
		}

		if (counter == 0)
			break;

		k++;

	}
}
