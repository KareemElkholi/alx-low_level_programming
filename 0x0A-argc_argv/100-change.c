#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int cents = atoi(argv[1]), n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		if (cents >= coins[i])
		{
			n += cents / coins[i];
			cents %= coins[i];
			if (cents == 0)
				break;
		}
	}

	printf("%d\n", n);
	return (0);
}
