#include <ctype.h>
#include "main.h"

/**
 * _islower - return a boolean value
 *
 * Return: 0
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
