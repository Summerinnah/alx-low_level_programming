#include <stdio.h>
#include "main.h"

/**
 * _atoi - program that converts a string to an integer
 * @s: string
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, n, a, car, z, number;

	i = 0;
	n = 0;
	a = 0;
	car = 0;
	z = 0;
	number = 0;

	while (s[car] != '\0')
		car++;

	while (i < car && z == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			number = s[i] - '0';
			if (a % 2)
				number = -number;
			n = n * 10 + number;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}

	if (z == 0)
		return (0);

	return (n);
}

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
