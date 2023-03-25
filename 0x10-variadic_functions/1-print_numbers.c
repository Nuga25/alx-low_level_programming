#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all parameters with seperator inbetween
 * @separator: seperator between numbers
 * @n: ammount of numbers to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(arg, unsigned int));
	}
	printf("\n");
	va_end(arg);
}
