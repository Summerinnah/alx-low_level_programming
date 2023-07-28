#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: input string
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
