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

dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t d;
	
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (&d);
}
