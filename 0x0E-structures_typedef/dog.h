#ifndef DOG_H
#define DOG_H

/**
 * struct dog - sructure containing information on a dog
 * @name: name of he dog(a string)
 * @age: age of the dog(a float)
 * @owner: owner of the dog(a string)
 * Description: contains grouped data on a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
