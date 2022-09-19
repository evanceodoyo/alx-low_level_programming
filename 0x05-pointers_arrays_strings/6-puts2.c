#include "main.h"

/**
 * puts2 - prints every other character of a string starting
 * with the first character, followed by a new line.
 *
 * @str: - string
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = 1;

	while (*str != '0\')
	{
		if (len % 2) == 0
			continue;
		_putchar(*str);

	}
	_putchar('\n');
}
