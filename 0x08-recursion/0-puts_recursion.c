#include "main.h"

/**
 * _puts_recursion - Print a string
 * @s: The string.
 * Return: Noting.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
