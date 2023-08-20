#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	while (i != 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\0');
}