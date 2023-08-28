#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: result
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (&s[i]);
		i++;
	}
	return (0);
}
