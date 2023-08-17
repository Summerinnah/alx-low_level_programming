#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string
 * @n: number of integers
 * @...: variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int print;

	va_start(number, n);

	for (print = 0; print < n; print++)
	{
		printf("%d", va_arg(number, int));

		if (print != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(number);
}
