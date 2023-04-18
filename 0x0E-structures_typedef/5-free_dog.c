#include "dog.h"

/**
 * free_dog - Function that frees dogs
 *
 * @d: Pointer
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	free(d);
}
