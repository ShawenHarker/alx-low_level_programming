#include <stdlib.h>
#include "main.h"

/**
 * _abs: Check int
 *
 * Return: Absolute value of n or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		int val;

		val = n * -1;
		return (val);
	}
	return (n);
}
