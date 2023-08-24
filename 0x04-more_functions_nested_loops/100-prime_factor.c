#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 */

int main(void)
{
	long num, count, max;

	num = 612852475143;
	for (count = 2; num > 1; count++)
		while (num % count == 0)
		{
			max = count;
			num /= count;
		}
	printf("%ld\n",max);
}
