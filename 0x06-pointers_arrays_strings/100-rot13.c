#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string
 * Return: pointer to destination
 */

char *rot13(char *s)
{
	int a;
	int b;
	char line1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char line2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; line1[b] != '\0'; b++)
		{
			if (s[a] == line1[b])
			{
				s[a] = line2[b];
				break;
			}
		}
	}
	return (s);
}
