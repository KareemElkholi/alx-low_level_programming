#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: result
 */

int _strlen_recursion(char *s)
{
	int res = 0;

	if (*s)
		res+= (1 + _strlen_recursion(s + 1));
	return (res);
}
