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
	d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
