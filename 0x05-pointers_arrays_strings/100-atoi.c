#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	int a, b, c, car, i, items;

	a = 0;
	b = 0;
	c = 0;
	car = 0;
	i = 0;
	items = 0;

	while (s[car] != '\0')
		car++;

	while (a < car && i == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			items = s[a] - '0';
			if (b % 2)
			items = -items;
			c = c * 10 + items;
			i = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			i = 0;
		}
		a++;
	}

	if (i == 0)
		return (0);

	return (c);
}
