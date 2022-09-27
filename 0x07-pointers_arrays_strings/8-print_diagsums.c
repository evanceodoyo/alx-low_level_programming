#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: square matrix to calculate the sum of its diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int j;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (j = 0; j < size; j++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (1 + i)) - (1 + i)];
	}

	printf("%d, %d", sum, sum1);
}
