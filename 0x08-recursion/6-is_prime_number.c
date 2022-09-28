#include "main.h"

int find_prime(int n, int l);

/**
 * is_prime_number - return 1 if input is prime number
 * otherwise return 0
 *
 * @n: integer to check if prime
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}

/**
 * find_prime - checks and returns a prime number
 * @n: number to check
 * @l: iterator
 *
 * Return: 1 if n is prime number, 0 otherwise
 */
int find_prime(int n, int l)
{
	if (l == 1)
		return (1);
	if (n % l == 0 && l > 0)
		return (0);
	return (find_prime(n, l - 1));
}
