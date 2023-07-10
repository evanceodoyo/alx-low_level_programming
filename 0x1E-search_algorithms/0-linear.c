#include "search_algos.h"

/**
 * linear_search - searches for value in an array using linear search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value: value to search for.
 *
 * Return: index of value; if array is NULL or value not in array, return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t val = -1;

	if (array != NULL)
	{

		size_t i;

		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				val = i;
				break;
			}
		}
	}
	return (val);
}
