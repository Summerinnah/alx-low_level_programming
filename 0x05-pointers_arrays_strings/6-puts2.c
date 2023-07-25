#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first one, followed by a new line
 * @str: input string
 * Return: 0
 */
void puts2(char *str)
{
	int always = 0;
	int d = 0;
	char *m = str;
	int c;

	while (*m != '\0')
	{
		m++;
		always++;
	}
	d = always - 1;
	for (c = 0 ; c <= d ; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}
