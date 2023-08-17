#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: value to create table
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j > 0)
				{
					if (mul < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(mul + '0');
					}
					else if (mul < 100)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar((mul / 10) + '0');
						_putchar((mul % 10) + '0');
					}
					else
					{
						_putchar(' ');
						_putchar((mul / 100) + '0');
						_putchar(((mul / 10) % 10) + '0');
						_putchar((mul % 10) + '0');
					}
				}
				else
					_putchar('0');
				if (j < n)
					_putchar(',');
			}
			_putchar('\n');
		}
}
