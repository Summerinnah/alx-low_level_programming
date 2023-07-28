#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: input integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned in num1;

	num1 = n;

	if (n < 0)
	{
		_putchar('-');
		num1 = -n;
	}

	if (num1 / 10 != 0)
	{
		print_number(num1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
