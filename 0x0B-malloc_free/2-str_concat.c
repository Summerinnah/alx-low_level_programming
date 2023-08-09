#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *feint;
	int i, ok;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ok = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ok] != '\0')
		ok++;
	feint = malloc(sizeof(char) * (i + ok + 1));

	if (feint == NULL)
		return (NULL);
	i = ok = 0;
	while (s1[i] != '\0')
	{
		feint[i] = s1[i];
		i++;
	}

	while (s2[ok] != '\0')
	{
		feint[i] = s2[ok];
		i++, ok++;
	}
	feint[i] = '\0';
	return (feint);
}
