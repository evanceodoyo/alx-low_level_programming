#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char s[] = "_putchar";

	while (i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
