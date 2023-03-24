#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters in a variadic function
 * @n: number of parameters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int sum = 0, i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(arg, unsigned int);
	}

	va_end(arg);

	return (sum);
}
