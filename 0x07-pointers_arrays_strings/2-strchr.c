#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: result
 */

char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
		i++;
	while (j <= i)
	{
		if (s[j] == c)
			return (&s[j]);
		j++;
	}
	return (0);
}
