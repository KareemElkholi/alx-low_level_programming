#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of the character \
 * Return: nothig
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
}
