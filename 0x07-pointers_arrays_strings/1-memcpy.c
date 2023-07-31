#include "main.h"

/**
 * _memcpy - function that copies memory data
 * @n: number of bytes copied
 * @src: memory area copied from
 * @dest: memory area copid to
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d;
	int e;

	d = 0;
	e = n;
	for (; d < e; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
