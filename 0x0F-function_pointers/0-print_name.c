#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name of a person
 * @name: name given
 * @f: pointer to function of name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
