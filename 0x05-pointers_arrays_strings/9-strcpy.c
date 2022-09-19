#include "main.h"

/**
 * _strcpy - copies str from src to dest.
 *
 * @src: source string to copy
 * @dest: buffer to copy the string to
 *
 * Return: A pointer to the destination of the string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
