#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to add to
 * @src: string to add
 * @n: maximum bytes to use from @src
 *
 * Return: resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
