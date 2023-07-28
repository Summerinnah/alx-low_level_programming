#include "main.h"

/**
 * _strncat - function that concatenetes two strings
 * @src: string to be appended
 * @n: maximum number of characters to be appended
 * @dest: pointer to the destination array
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
