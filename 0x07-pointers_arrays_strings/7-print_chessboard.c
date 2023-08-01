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

	for (c = 0; c < 8; c++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[c][k]);
		_putchar('\n');
	}
}
