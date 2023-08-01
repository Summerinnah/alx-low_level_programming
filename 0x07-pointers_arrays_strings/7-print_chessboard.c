#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: input
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int c;
	int k;

	c = 0;
	for (c < 8; c++)
	{
		k = 0;
		for (k < 8; k++)
			_putchar(a[c][k]);
		_putchar('\n');
	}
}
