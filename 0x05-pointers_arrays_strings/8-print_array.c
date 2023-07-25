#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array
 * @n: the number of elements of the array to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; a < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
		if (b == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
