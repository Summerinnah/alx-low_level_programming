#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @n: number of bytes of the memory area pointed to
 * @b: value to be set
 * @s: pointer to the block of memory to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;
	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
