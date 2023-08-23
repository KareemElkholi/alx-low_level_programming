#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i, j;
	char c;

	j = 0;
	while (s[j] != '\0')
		j++;

	for (i = 0; i < --j; i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
