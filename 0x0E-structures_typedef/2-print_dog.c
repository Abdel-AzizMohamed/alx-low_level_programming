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
	d->name == NULL ? printf("name : (nil)") : printf("name: %s\n", d->name);
	printf("age: %.1f\n", d->age);
	d->owner == NULL ? printf("owner : (nil)") : printf("owner: %s\n", d->owner);
}
