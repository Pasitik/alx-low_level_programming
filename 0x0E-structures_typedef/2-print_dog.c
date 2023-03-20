#include "dog.h"6

/**
 * print_dog - print func;
 *
 * @d: ...
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("NIL");
		else
			printf("Name: %s\n", d->name);
		if ((*d).age == 0)
			printf("nil");
		else
			printf("Age: %f\n", d->age);
		if ((*d).owner == NULL)
			printf("nil");
		else
			printf("Owner: %s\n", d->owner);
	}
}
