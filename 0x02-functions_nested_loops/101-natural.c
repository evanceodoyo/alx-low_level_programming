#include <stdio.h>
/**
 * main - entry point.
 *
 * Description: sums multiples of 3 and 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int total = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			total += i;
	}
	printf("%d\n", total);

	return (0);
}
