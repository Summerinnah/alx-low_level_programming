#include "main.h"

/**
 * _strncpy - function that copies a sting
 * @dest: pointer to the destination array
 * @src: string to be copied
 * @n: number of characters to be copied from source
 * Return: returns the pointer to the copied srting
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++
	}

	return (dest);
}
