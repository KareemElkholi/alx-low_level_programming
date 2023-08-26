#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0,  temp = 0;

	while (i < n)
	{
		temp = a[--n];
		a[n] = a[i];
		a[i++] = temp;
	}
}
