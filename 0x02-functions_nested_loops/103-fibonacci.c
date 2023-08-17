#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int i, n1, n2, sum1, sum2;

	n1 = 1;
	n2 = 2;
	for (i = 0; i < 32; i++)
	{
		if (n1 % 2 == 0)
			sum2 += n1;
		sum1 = n1 + n2;
		n1 = n2;
		n2 = sum1;
	}
	printf("%d\n", sum2);
	return (0);
}
