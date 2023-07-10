#include "search_algos.h"

/**
 * print_arr - a helper function to print array elements
 * @array: pointer to the first element of array to print
 * @l: left index of the array
 * @r: right index of the array
 * Return: None
*/

void print_arr(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - searches for value in an array using binary search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value: value to search for.
 *
 * Return: index of value; if array is NULL or value not in array, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t l = 0;
		size_t r = size - 1;
		size_t midpoint;

		while (l <= r)
		{
			print_arr(array, l, r);
			midpoint = (l + r) / 2;

			if (array[midpoint] == value)
				return (midpoint);
			else if (array[midpoint] < value)
				l = midpoint + 1;
			else
				r = midpoint - 1;
		}
	}
	return (-1);
}
