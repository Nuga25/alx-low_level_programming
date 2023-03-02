#include "main.h"

/**
 * swap_int - swaps int variables
 * @a: int to check
 * @b: int to check
 * Return: swap_int
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a + *b;
	*b = x - *b;
	*a = x - *a;
}
