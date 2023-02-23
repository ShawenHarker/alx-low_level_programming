#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: Check this character.
 * Return: 1 if c is a digit, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
