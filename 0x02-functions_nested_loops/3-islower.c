#include "main.h"

/**
 * _islower - Checks for lowercase characters
 *
 * Return: 1 for is lowercase characters, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
