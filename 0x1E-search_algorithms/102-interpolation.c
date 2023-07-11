#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value: value to search for.
 *
 * Return: index of value; if array is NULL or value not in array, return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t low = 0;
		size_t high = size - 1;
		size_t pos;

		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		while (low <= high)
		{
			pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
			if (pos > size)
			{
				printf("Value checked array[%ld] is out of range\n", pos);
				return  (-1);
			}

			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

			if (array[pos] == value)
				return (pos);

			if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
		if (array[low] == value)
			return (low);
	}
	return (-1);
}
