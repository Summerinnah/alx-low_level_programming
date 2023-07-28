#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: number of the elements of the array
 * @a: array of integers
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int p;
	int q;

	for (p = 0; p < n--; p++)
	{
		q = a[p];
		a[p] = a[n];
		a[n] = q;
	}
}
