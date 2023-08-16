#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0
 */

void times_table(void)
{
	int i, n, mul;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			mul = n * i;
			if (n > 0)
			{
				if (mul < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			else
				_putchar('0');
			if (n < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
