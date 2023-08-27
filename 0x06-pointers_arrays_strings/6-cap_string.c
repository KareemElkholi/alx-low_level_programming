#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string
 * Return: result
 */

char *cap_string(char *s)
{
	int i, j;
	char c[14] = " \t\n,:.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = 0; j < 14; j++)
		{
			if (s[i] == c[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
