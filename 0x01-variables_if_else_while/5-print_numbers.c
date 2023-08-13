#include <stdio.h>

/**
 * main - prints the single digit numbers of base 10
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
