#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_str - dogyy
 * @str: ointer to the structure variable
 * Return: nothing
 */

int count_str(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);

}

/**
 * new_dog - salf
 * @name: sadd
 * @age: adssd
 * @owner: sad
 * Return: dasdasd
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_size;
	int owner_size;

	if (!name || age < 0 || !owner)
		return  (NULL);


	name_size = count_str(name);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * name_size + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	owner_size = count_str(owner);
	d->owner = malloc(sizeof(char) * owner_size + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = name;
	d->owner = owner;
	d->age = age;
	return (d);
}
