#include "main.h"

int sqrt_func(int n, int l);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to return its integer
 *
 * Return: natural squaroot of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_func(n, 0));
}

/**
 * sqrt_func - recurses to find the natural
 * square root of an integer value
 * @n: number to find its square root
 * @l: iterator
 *
 * Return: the square root
 *
 */
int sqrt_func(int n, int l)
{
	if (l * l > n)
		return (-1);
	if (l * l == n)
		return (l);

	return (sqrt_func(n, i + 1));
}
