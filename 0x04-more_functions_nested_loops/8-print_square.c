#include "main.h"

/**
 * print_square - prints a square
 * @size: char check
 * Returns: void
 */

void print_square(int size)
{
	int x, i;

	if (size <= 0)
		_putchar('\n');

	for (x = 0; x < size; x++)
	{
		for (i = 0; i < size; i++)
			_putchar('#');
		_putchar('\n');
	}
}
