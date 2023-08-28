#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				break;
		if (s[i] == accept[j])
			i++;
		else
			return (i);
	}
}
