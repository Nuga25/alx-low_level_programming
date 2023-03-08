#include "main.h"

/**
 * factorial - gets factorial of a number
 * @n: int to check
 * Return: n
 */

int factorial(int n)
{
	int i;

	if (n >= 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = return n * factorial(n - 1);
	}

	return (i);
}
