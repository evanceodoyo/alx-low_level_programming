#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase except "q" and "e"
 *
 * Return: Always 0 (Succcess)
 *
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] != "e" && alphabet[i] != "q")
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n')
	return (0);
}
