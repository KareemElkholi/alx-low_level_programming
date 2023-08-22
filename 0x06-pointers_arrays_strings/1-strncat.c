#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of characters
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n)
		dest[i++] = src[j++];
}
