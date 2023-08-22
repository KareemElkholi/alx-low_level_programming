#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of characters
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != 0)
		dest[i++] = src[j++];
	return (dest);
}
