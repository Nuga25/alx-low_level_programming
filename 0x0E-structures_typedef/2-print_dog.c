#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog class
 * @d: struct variable
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("nil");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
			printf("nil");
		else
			printf("Owner: %s\n", d->owner);
	}
}
