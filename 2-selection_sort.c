#include "sort.h"

/**

 * selection_sort - sorts array of ints in ascending order with selection sort

 * @array: array

 * @size: size of array

 */

void selection_sort(int *array, size_t size)

{

	size_t peq, i, j;

	int tmp;




	for (i = 0; i < size - 1; i++)

	{

		peq = i;

		for (j = i + 1; j < size; j++)

		{

			if (array[j] < array[peq])

				peq = j;

		}

		if (peq != i)

		{

			tmp = array[i];

			array[i] = array[peq];

			array[peq] = tmp;

			print_array(array, size);

		}

	}

}
