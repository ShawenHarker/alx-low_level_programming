#include "main.h"

/**
 * _isalpha - Check if characters is in the alphabet, upper or lowercase.
 * @c: Check this charcter
 * Return: 1 if c is a letter, lowercase or uppercase
 * Returns: 0 otherwise
 * */
 int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
