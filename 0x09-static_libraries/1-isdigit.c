#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digits
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
