#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 *               the Jump search algorithm
 * @array: pointer to the first element of the arry to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value; if arry is NULL or value not in array, return -1
 */

int jump_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t step = sqrt(size);
		size_t prev = 0;
		size_t i;

		while (array[prev] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
			if (prev >= size - 1 || array[step] >= value)
				break;
			prev = step;
			step += sqrt(size);
		}

		printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

		for (i = prev; i <= step && i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
