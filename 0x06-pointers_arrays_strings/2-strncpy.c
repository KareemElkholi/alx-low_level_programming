#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number of characters
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
