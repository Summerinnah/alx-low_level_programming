#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: where memory is stored
 *@src: where memory is copied
 *@n: number of bytes
 *Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int j = n;

	for (; s < j; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
