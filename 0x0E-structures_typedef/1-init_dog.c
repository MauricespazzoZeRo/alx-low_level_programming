#include "dog.h"

/**
 * init_dog - Initialize variable of type 'struct dog'
 *
 * @d: Pointer
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
