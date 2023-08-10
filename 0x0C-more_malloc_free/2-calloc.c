#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: input
 * @b: input
 * @n: number of times to copy b
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: elements in the array
 * @size: size of each element
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
