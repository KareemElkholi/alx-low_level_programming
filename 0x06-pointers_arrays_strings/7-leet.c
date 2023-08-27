#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: result
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL", b[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
