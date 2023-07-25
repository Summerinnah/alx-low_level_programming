#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by new line
 * n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: 0
 */
void puts_half(char *str)
{
	int b, i, always;

	always = 0;

	for (b = 0; str[b] != '\0'; b++)
		always++;

	i = (always / 2);

	if ((always % 2) == 1)
		i = ((always + 1) / 2);

	for (b = i; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
