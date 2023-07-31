#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: sting
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
}
return ('\0');
}
