#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Check this out.
 * Return: The lenght of @s.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
