#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialize a struct
 * @d: struct dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
