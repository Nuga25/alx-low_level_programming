#include "main.h"
#include <ctype.h>

/**
 * _isupper - returns 0 or 1
 *
 * Return: _isupper
 */

int _isupper(int c)
{
	if (isupper(c))
		putchar(1);
	else
		putchar(0);

	putchar('\n');

	return (_isupper);
}
