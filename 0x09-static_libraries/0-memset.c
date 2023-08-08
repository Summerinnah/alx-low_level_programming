#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: address of memory to be filled
 * @b: the desired value
 * @n: bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k;

k = 0;
	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
