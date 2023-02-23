#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Check this character.
 * Return: Nothing.
 */

void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
			_putchar('_');
	}
	_putchar('\n');
}
