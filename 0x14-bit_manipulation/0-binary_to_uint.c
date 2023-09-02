#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number
 * @y: number
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, length;
	
	if (b == NULL)
		return (0);

	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (i = 0; i < length; i++)
	{
		sum += (b[i] - '0') * _pow_recursion(2, (length - i - 1));
	}

	return (sum);
}
