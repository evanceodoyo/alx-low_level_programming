#include "main.h"
/**
 * print_last_digit - prints the last digit of any given number
 *
 * @n: integer to be checked
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n *= -1;
		_putchar(n + '0');
		return (n);
	}
	_putchar(n + '0');
	return (n);
}
