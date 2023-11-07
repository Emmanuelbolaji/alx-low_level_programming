#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: a string
 * @age: a float
 * @owner: a string
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdogptr = (dog_t *)malloc(sizeof(dog_t));

	if (newdogptr == NULL)
	{
		return (NULL);
	}

	newdogptr->name = (char *)malloc(strlen(name) + 1);
	newdogptr->owner = (char *)malloc(strlen(owner) + 1);

	if (newdogptr->name == NULL || newdogptr->owner == NULL)
	{
		free(newdogptr->name);
		free(newdogptr->owner);
		free(newdogptr);
		return (NULL);
	}

	strcpy(newdogptr->name, name);
	strcpy(newdogptr->owner, owner);

	newdogptr->age = age;

	return (newdogptr);
}
