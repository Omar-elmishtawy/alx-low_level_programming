#include "dog.h"
#include <stdio.h>

/**
 * print_dog - dogyy
 * @d: ointer to the structure variable
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n",d->name, d->age, d->owner);
		
	}


}
