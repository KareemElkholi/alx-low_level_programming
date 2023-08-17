#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long i, n1, n2, sum;

	n1 = 1;
	n2 = 2;
	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", n1);
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
	printf("%ld, ", n1);
	return (0);
}
