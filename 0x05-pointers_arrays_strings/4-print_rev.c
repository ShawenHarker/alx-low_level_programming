#include "main.h"

/**
 * print_rev - Print a string in reverse.
 * @s: Check this out.
 * Return: A string in reverse.
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (count -= 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
