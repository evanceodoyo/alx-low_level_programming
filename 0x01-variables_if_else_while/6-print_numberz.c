#include <stdio.h>
/**
 * main - Prints 9 to 10 [uses ASCII]
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

