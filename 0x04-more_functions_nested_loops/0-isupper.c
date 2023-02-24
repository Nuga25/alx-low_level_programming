#include "main.h"
#include <ctype.h>

/**
 * _isupper - returns 0 or 1
 * @c: - character to print
 * Return: _isupper
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
