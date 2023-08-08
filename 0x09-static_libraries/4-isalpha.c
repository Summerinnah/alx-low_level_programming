#include "main.h"

/**
 * _isalpha - function that checks for alphabetic characters
 * @c: input
 * Return: 1 if c is a letter, 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
