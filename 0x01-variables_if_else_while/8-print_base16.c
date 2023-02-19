#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int ch;
	int ch2;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch2 = 'a'; ch2 <= 'g'; ch2++)
	{
		putchar(ch2);
	}
	putchar('\n');
	return (0);
}
