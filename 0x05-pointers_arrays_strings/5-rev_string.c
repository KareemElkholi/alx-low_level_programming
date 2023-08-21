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

	int i, j = length;
	char str[length];

	for (i = 0; i <= length; i++)
		str[i] = s[i];
	for (i = 0; i < length; i++)
		s[i] = str[--j];
	s[i] = '\0';
}
