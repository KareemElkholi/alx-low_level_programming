#include "main.h"

/**
 * more_numbers - prints more numbers
 */

void more_numbers(void)
{
	int i, j;
	char str[] = "01234567891011121314\n";

	for (i = 0; i < 10; i++)
		for (j = 0; j < 21; j++)
			_putchar(str[j]);
}
