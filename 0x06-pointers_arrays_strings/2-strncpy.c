#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: copy to
 * @src: copy from
 * @n: maximum number of bytes @src to be copied
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
