#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: struct variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
