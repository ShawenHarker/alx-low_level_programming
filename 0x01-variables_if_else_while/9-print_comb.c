#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int ch;

	for (ch = 100; ch < 110; ch++)
	{
		putchar(ch);
		if (ch != 109)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
