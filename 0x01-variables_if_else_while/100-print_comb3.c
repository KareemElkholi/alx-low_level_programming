#include <stdio.h>

/**
 * main - prints different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int n1, n2;

	for (n1 = 48; n1 <= 56; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
			if (n1 < n2)
			{
				putchar(n1);
				putchar(n2);
				if (n1 != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');

	return (0);
}
