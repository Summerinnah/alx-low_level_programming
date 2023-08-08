#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: input
 * @src: input
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int z = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; z < y ; z++)
	{
		dest[z] = src[z];
	}
	dest[y] = '\0';
	return (dest);
}
