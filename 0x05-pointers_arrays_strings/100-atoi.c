#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: result
 */

int _atoi(char *s)
{
	int i = 0, res = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (sign * res);
}
