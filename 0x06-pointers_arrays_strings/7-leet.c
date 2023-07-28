#include "main.h"

/**
 * cap_string - encodes a string to 1337
 * @s: string to be capitalized
 * Return: pointer to the altered string
 */

char *cap_string(char *s)
{
	int digit = 0;

	while (s[digit])
	{
		while (!(s[digit] >= 'a' && s[digit] <= 'z'))
			digit++;

		if (s[digit - 1] == '' ||
		    s[digit - 1] == '\t' ||
		    s[digit - 1] == '\n' ||
		    s[digit - 1] == ',' ||
		    s[digit - 1] == ';' ||
		    s[digit - 1] == '.' ||
		    s[digit - 1] == '!' ||
		    s[digit - 1] == '?' ||
		    s[digit - 1] == '"' ||
		    s[digit - 1] == '(' ||
		    s[digit - 1] == ')' ||
		    s[digit - 1] == '{' ||
		    s[digit - 1] == '}' ||
		    digit == 0)
			s[digit] -= 32;
		digit++;
	}

	return (s);
}
