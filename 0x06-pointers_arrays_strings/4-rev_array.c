#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0,  temp = 0;

	while (a[i] != '\0')
		i++;
	while (j < i)
	{
		temp = a[--i];
		a[i] = a[j];
		a[j++] = temp;
	}
}
