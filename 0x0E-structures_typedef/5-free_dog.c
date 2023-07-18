#include "dog.h"
#include <stdio.h>

/**
 * init_dog - dogyy
 * @d: ointer to the structure variable
 * @name: name of the dog
 * @age: age:
 * @owner: owner
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owenr);
		free(d);
	}
}
