#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int getLastDigit = n % 10;
	if (getLastDigit > 5)
	{
		printf("%d and is greater than 5\n", getLastDigit);
	}
	else if (getLastDigit != 0 && getLastDigit < 6)
	{
		printf("%d and is less than 6 and 0\n", getLastDigit);
	}
	else
	{
		printf("%d and is 0\n", getLastDigit);
	}
	return (0);
}
