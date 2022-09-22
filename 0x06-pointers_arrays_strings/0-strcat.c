#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: string to add
 * @dest: string to add to
 *
 * Return: pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
