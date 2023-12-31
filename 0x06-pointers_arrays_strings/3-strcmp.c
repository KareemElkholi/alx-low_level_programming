#include "main.h"

/**
 * _strcmp - compares two srings
 * @s1: first string
 * @s2: second string
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
