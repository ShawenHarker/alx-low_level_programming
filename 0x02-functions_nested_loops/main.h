#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
    int alpha;

    for (alpha = 'a'; alpha <= 'z'; alpha++)
    {
        putchar(alpha);
    }
    putchar('\n');
    return;
}