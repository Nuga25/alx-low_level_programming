#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - prints duplicate of a string
 * @str: stores string
 *
 * Return: myString
 */

char *_strdup(char *str)
{
	char *myString;
	int len = strlen(*str);

	if (str == NULL)
		return (NULL);

	myString = malloc((len + 1) * sizeof(char));

	if (myString == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		myString[i] = str[i];
	}

	return (myString);
}
