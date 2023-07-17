/**
 * init_dog - dogyy
 * @d: ointer to the structure variable
 * @name: name of the dog
 * @age: age:
 * @owner: owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
