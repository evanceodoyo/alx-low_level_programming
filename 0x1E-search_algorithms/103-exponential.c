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
 * b_search - searches for value in an array using binary search algorithm
 * @array: pointer to the first element of the array to search in.
 * @l: left index of the array
 * @r: right index of the array
 * @value: value to search for.
 *
 * Return: index of value; if array is NULL or value not in array, return -1
 */

int b_search(int *array, size_t l, size_t r, int value)
{
	if (array != NULL)
	{
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

/**
 *exponential_search - exponential search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value: value to search for.
 *
 * Return: index of value; if array is NULL or value not in array, return -1
 */


int exponential_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t u_bound = 1;
		size_t l_bound;

		while (u_bound < size && array[u_bound] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", u_bound, array[u_bound]);
			u_bound *= 2;
		}
		l_bound = u_bound / 2;

		if (u_bound > size - 1)
			u_bound = size - 1;

		printf("Value found between indexes [%ld] and [%ld]\n", l_bound, u_bound);
		return (b_search(array, l_bound, u_bound, value));
	}
	return (-1);
}
