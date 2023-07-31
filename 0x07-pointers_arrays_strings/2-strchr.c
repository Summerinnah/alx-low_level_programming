#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: unsigned character
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int z;

	z = 0;
	for (s[z] >= '\0'; z++)
	{
		if (s[z] == c)
			return (&s[z]);
	}
	return (0);
}
