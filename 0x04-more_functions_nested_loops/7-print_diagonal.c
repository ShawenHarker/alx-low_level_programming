#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Check this character.
 * Return: Nothing.
 */

void print_diagonal(int n)
{
	int count1, count2;

	if (n > 0)
	{
		for (count1 = 0; count1 < n; count1++)
		{
			for (count2 = 0; count2 < n; count2++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
