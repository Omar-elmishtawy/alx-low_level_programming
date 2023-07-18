#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - dogyy
 * @d: ointer to the structure variable
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
