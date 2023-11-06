#include "dog.h"

/**
 * init_dog - function initialize a variable of type struct dog
 * @d: variable to be initialized
 * @name: name of the dog which is a string
 * @age: age of the dog which is a float
 * @owner: owner of the dog which is a string
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
