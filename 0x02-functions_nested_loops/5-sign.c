#include "main.h"

/**
 * print_sign - entry point
 *
 * @n: The number to check
 *
 * Description: checks sign of a number
 *
 * Return: +, -, or 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
