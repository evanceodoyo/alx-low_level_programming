#include <stdio.h>
/**
 * main - print numbers between 012 t0 789.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, e, j;

	i = 48;
	e = 48;
	j = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			j = 48;
			while (j < 58)
			{
				if (e != i && i != j && e < i && i < j)
				{
					putchar(e);
					putchar(i);
					putchar(j);
					if (i == 56 && e == 55 && j == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
