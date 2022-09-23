#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int j, k;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; a[k] != '\0'; k++)
		{
			if (s[j] == a[k])
			{
				s[j] = b[k];
				break;
			}
		}
	}

	return (s);
}
