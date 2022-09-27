#include"main.h"
/**
* _strchr - locates a character in a string
* @s: string
* @c: character to check in s
*
* Return: pointer to first occurence of c
*/
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		i = *s++;
		if (i == c)

			return (s - 1);

		if (i == 0)
			return (NULL);
	}
}
