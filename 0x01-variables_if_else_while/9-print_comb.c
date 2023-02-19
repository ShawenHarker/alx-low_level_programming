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

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar( ch);
		if (ch < '9')
		{
			putchar(",\ ");
		}
		if (ch == 9)
		{
			putchar("$");
		}
	}
	putchar('\n');
	return (0);
}
