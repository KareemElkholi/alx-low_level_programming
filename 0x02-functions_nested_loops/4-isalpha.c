#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: character to check
 * Return: 1 if alphabet or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}
