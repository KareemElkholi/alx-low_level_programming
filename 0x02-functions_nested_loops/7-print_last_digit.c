#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to check
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	return (r + '0');
}
