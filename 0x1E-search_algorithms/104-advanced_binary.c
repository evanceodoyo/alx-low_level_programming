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
 * recursive_bin_search - recursive binary search
 * @array: pointer to the first element of the array
 * @l: left index of the array
 * @r: right index of the array
 * @value: value to search for
 * Return: index of value; if array is NULL or value not in array, return -1
 */

int recursive_bin_search(int *array, size_t l, size_t r, int value)
{
	if (r >= l)
	{
		size_t mid = (l + r) / 2;

		print_arr(array, l, r);
		if  (array[mid] == value)
		{
			if (array[mid] == array[mid -1])
			{
				print_arr(array, mid - 1, mid);
				mid--;
			}
			return (mid);
		}
		if (array[mid] > value)
			return (recursive_bin_search(array, l, mid - 1, value));

		return (recursive_bin_search(array, mid + 1, r, value));
	}
	return (-1);
}

/**
 * advanced_binary - binary search that returns index of the first value
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value; if array is NULL or value not in array, return -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t l = 0;
		size_t r = size - 1;
		return (recursive_bin_search(array, l, r, value));
	}
	return (-1);
}
