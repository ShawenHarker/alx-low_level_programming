#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Check this character
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else if (n < 98) 
	{
		while (n <= 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		_putchar(n);
	}
	_putchar('\n');
}
