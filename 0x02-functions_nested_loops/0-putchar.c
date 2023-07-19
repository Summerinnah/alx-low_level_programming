#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints putchar followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 1 ; j <= 1 ; j++)
		{
			printf("_putchar");
		}
		printf("\n");
	}
}
