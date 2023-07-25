#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed by src
 * @dest: copies to
 * @src: copies from
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;
	int n = 0;

	while (*(src + d) != '\0')
	{
		d++;
	}
	for ( ; n < d ; n++)
	{
		dest[n] = src[n];
	}
	dest[d] = '\0';
	return (dest);
}
