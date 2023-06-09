#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initailize variable of type dog
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
