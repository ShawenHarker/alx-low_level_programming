#include <ctype.h>
#include "main.h"

/**
 * _islower - Enter int c
 *
 * Return: 1 for is lower || 0 for is not lower
 */
int _islower(int c)
{
	if (islower(c) != 1)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
