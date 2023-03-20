#include "dog.h"

/**
 * init_dog - initializing structure
 *
 * @d: ....
 * @name: ....
 * @age: ....
 * @owner: ....
 * Return: void
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
