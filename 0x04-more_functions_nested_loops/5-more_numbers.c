#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14.
 * Return: Nothing.
 */

void more_numbers(void)
{
	int line;
	int count1;
	int count2;

	for (line = 0; line < 10; line++)
	{
		for (count1 = '0'; count1 <= '9'; count1++)
		{
			_putchar(count1);
		}
		for (count2 = 'a'; count2 <= 'e'; count2++)
		{
			_putchar(count2);
		}
		_putchar('\n');
	}
}
