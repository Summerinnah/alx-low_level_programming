#include "main.h"

/**
 * cap_string - fuction that capitalizes all words of a string
 * @str: string to be capitalized
 * Return: pointer to the destinatio
 */

char *cap_string(char *str)
{
	int digit = 0;

	while (str[digit])
	{
		while (!(str[digit] >= 'a' && str[digit] <= 'z'))
			digit++;

		if (str[digit - 1] == ' ' ||
		    str[digit - 1] == '\t' ||
		    str[digit - 1] == '\n' ||
		    str[digit - 1] == ',' ||
		    str[digit - 1] == ';' ||
		    str[digit - 1] == '.' ||
		    str[digit - 1] == '!' ||
		    str[digit - 1] == '?' ||
		    str[digit - 1] == '"' ||
		    str[digit - 1] == '(' ||
		    str[digit - 1] == ')' ||
		    str[digit - 1] == '{' ||
		    str[digit - 1] == '}' ||
		    digit == 0)
			str[digit] -= 32;

		digit++;
	}

	return (str);
}
