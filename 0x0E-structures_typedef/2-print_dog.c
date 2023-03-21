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
		if (d->age == NULL)
			printf("nil");
		if (d->owner == NULL)
			printf("nil");
		else
			printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
