#include <stdio.h>
/**
 * main - Print Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long int fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib3 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}