#include <ctype.h>
#include "main.h"

/**
 * islower - return a boolean value
 *
 * Return: 0
 */
int _islower(int c)
{
	if (islower(c) == 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
