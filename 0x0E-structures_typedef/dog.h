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

#endif
