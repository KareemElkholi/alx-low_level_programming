#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i, j, length;
	char c;

	length = 0;

	while (s[length] != '\0')
		length++;

	j = --length;

	for (i = 0; i < j; i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j--;
	}
}
