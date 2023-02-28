#include "main.h"

/**
 * _puts - Print a string.
 * @str: Check out for this.
 * Return: Nothing.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
