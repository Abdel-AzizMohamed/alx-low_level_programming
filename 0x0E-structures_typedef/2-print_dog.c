#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print out struct dog members
 * @d: dog struct
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	
	d->name = d->name == NULL ? "(nil)" : d->name;
	d->owner = d->owner == NULL ? "(nil)" : d->owner;

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
