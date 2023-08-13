#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates random number and prints the last digit
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (n % 10 < 6)
		printf("Last digit of %d is less than 6 and not 0\n", n);
	else
		printf("Last digit of %d is greater than 5\n", n);

	return (0);
}
