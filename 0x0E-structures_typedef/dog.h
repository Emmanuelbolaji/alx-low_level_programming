#ifndef DOG_H
#define DOG_H

/**
 * struct dog - sructure containing information on a dog
 * @name: name of he dog(a string)
 * @age: age of the dog(a float)
 * @owner: owner of the dog(a string)
 * Description: contains grouped data ona dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
