#include "main.h"
/**
 * print_rev - reverse a string
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int always = 0;
	int d;

	while (*s != '\0')
	{
		always++;
		s++;
	}
	s--;
	for (d = always; d > 0; d--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
