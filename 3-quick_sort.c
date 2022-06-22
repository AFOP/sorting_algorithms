#include "sort.h"

/**
 * partition - part the array
 * @array: array to take in
 * @start: start of array;
 * @end: end of array
 * @size: full size of array
 * Return: position of pivot
 */

int partition(int *array, int start, int end, int size)

{
	int pivot = array[end];
	int i = start, j, temp;

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != end)
	{
		temp = array[i];
		array[i] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	printf("return i=%d\n", i);
	return (i);
}
