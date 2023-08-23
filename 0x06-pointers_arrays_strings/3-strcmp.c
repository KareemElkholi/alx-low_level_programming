#include "main.h"

/**
 * _strcmp - compares two srings
 * @s1: first string
 * @s2: second string
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
