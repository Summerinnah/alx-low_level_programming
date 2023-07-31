#include "main.h"

/**
 * _strpbrk - function that searches a string for any of aset of bytes
 * @s: string
 * @accept: string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
		int p;

		while (*s)
		{
			for (p = 0; accept[p]; p++)
			{
			if (*s == accept[p])
			return (s);
			}
		s++;
		}

	return ('\0');
}
