#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

    if (new_dog == NULL) {
        return NULL;
    }

    new_dog->name = strdup(name);
    new_dog->owner = strdup(owner);

    if (new_dog->name == NULL || new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return NULL;
    }

    new_dog->age = age;

    return new_dog;
}