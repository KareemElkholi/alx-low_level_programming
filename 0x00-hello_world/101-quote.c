#include <stdio.h>

/**
 * main - prints to the standard error
 * Return: 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", str);
	return (1);
}
