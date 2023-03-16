#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);

	return (ptr);
}
