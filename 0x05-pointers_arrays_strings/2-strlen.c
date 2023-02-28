#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Check this out.
 * Return: counter.
 */

int _strlen(char *s)
{
	int counter;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
