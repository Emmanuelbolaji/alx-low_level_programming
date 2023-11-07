#include "dog.h"

/**
 * free_dog - unction that frees dogs
 * @d: is a pointer
 * Return: nothing here to return
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
