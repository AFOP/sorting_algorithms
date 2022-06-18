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
	size_t i, step; 									// O(1)

	if (size == 0 || array == NULL)
		return;
	if (size > 2)
	{
		for (step = 0; step < size - 1; ++step) 		//O(n)
		{
			for (i = 0; i < size - step - 1; ++i) 		//O(n 2)
			{
				if (array[i] > array[i + 1]) 			//O(n 2)
				{
					int temp = array[i]; 				//O(n 2)

					array[i] = array[i + 1]; 			//O(n 2)

					array[i + 1] = temp; 				//O(n 2)

					print_array(array, size); 			//O(n 2)
				}
			}
		}
	}
}
