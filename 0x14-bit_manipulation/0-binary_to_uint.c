#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, length;

	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (i = 0; i < length; i++)
	{
		sum += (b[i] - '0') * pow(2, (length - i - 1));
	}

	return (sum);
}
