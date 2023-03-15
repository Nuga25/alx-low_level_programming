#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an arrary of char
 * @size: size of array
 * @c: arrray initialization
 *
 * Return: myArray
 */

char *create_array(unsigned int size, char c)
{
	char *myArray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	myArray = (char *)malloc(size * sizeof(char));

	if (myArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		myArray[i] = c;
	}

	return (myArray);
}

