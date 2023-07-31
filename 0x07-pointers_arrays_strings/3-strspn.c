#include "main.h"

/**
 *  _strspn - function that gets the length of a prefix substring
 *  @s: input string
 *  @accept: input
 *  Return: number of the bytes in the intial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
