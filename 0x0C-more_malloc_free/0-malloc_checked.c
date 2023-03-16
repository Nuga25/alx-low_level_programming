#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);

	return (ptr);
}
