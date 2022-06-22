#include "sort.h"

/**
 * bubble_sort - function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 * @array: pointer array with the numbers
 * @size: size of array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, step;

	if (size <= 0 || array == NULL)
		return;
	if (size > 2)
	{
		for (step = 0; step < size - 1; ++step)
		{
			for (i = 0; i < size - step - 1; ++i)
			{
				if (array[i] > array[i + 1])
				{
					int temp = array[i];

					array[i] = array[i + 1];

					array[i + 1] = temp;

					print_array(array, size);
				}
			}
		}
	}
}
