#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input string
 * Return: pointer to the destination
 */

char *leet(char *n)
{
	int y;
	int z;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (y = 0; n[y] != '\0'; y++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[y] == str1[z])
			{
				n[y] = str2[z];
			}
		}
	}
	return (n);
}
