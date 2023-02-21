#include <ctype.h>
#include "main.h"

/**
 * _islower - Check int c
 *
 * Return: 1 for is lower || 0 for is not lower
 */
int _islower(int c)
{
	if (islower(c) != 1)
	{
		_putchar(0);
	}
	else
	{
		_putchar(1);
	}
	return (0);
}
