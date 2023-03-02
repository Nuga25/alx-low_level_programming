#include "main.h"

/**
 * swap_int - swaps int variables
 * @a: int to check
 * @b: int to check
 * Return: swap_int
 */

void swap_int(int *a, int *b)
{
	int *a = &a;
	int *b = &b;
	*a = b;
	*b = a;
}
