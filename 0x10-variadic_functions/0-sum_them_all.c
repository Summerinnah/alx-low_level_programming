#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its paramters
 * @n: the number of paramters
 * @...: a variable number of paramters
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vf;
	unsigned int i, sum = 0;

	va_start(vf, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vf, int);

	va_end(vf);

	return (sum);
}
