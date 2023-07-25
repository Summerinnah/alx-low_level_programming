#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	char save = s[0];
	int always = 0;
	int i;

	while (s[always] != '\0')
	always++;
	for (i = 0; i < always; i++)
	{
		always--;
		save = s[i];
		s[i] = s[always];
		s[always] = save;
	}
}
