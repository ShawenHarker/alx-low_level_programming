#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: Check for this character.
 * Return: 1 if character is uppercase, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
