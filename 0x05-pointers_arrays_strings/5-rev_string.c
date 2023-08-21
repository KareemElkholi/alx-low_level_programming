#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	int i = 0;
	int j = --length;
	char c1, c2;

	while (j > i)
	{
		c1 = s[i];
		c2 = s[j];
		s[i] = c2;
		s[j] = c1;
		i++;
		j--;
	}
}
