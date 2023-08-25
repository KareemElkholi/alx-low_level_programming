#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
