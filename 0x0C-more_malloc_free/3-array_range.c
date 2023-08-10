#include <stdlib.h>
#include "main.h"

/**
 * *array_range - fuction that creates an array of integers
 * @min: input value
 * @max: input value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a, code;

	if (min > max)
		return (NULL);

	code = max - min + 1;

	ptr = malloc(sizeof(int) * code);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
