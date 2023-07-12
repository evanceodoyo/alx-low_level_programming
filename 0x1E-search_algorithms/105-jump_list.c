#include "search_algos.h"
#include <math.h>

/**
 * trav_list - traverses a list.
 * @list: singly linked list.
 * @step: number of nodes to check.
 * Return: pointer to list.
 */

listint_t *trav_list(listint_t *list, size_t step)
{
	size_t i = 0;

	while (i < step)
	{
		list = list->next;
		if (list->next == NULL)
			return (list);
		i++;
	}
	return (list);
}

/**
 * jump_list - Jump search in a singly linked list
 * @list: pointer to the head of the list to search in.
 * @size: number of nodes in list.
 * @value: value to search for.
 * Return: index of the value, NULL if not found.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *runner = list;
	listint_t *prev;
	size_t step;

	if (list == NULL)
		return (NULL);

	step = sqrt(size);
	while (runner->n < value)
	{
		prev = runner;
		runner = trav_list(runner, step);
		if (runner->next == NULL)
		{
			printf("Value checked at index [%ld] = [%d]\n", runner->index, runner->n);
			break;
		}
		printf("Value checked at index [%ld] = [%d]\n", runner->index, runner->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, runner->index);
	while (prev->index <= runner->index)
	{
		if (prev->index == runner->index)
		{
			printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
			if (prev->n == value)
				return (prev);
			else
				return (NULL);
		}
		if (prev->n == value)
		{
			printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
			return (prev);
		}
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}
	return (NULL);
}
