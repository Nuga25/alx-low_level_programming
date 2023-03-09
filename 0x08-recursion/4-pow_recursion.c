#include "main.h"

/**
 * _pow_recursion - power of x raised to y
 * @x: int
 * @y: int
 * Return: i
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
