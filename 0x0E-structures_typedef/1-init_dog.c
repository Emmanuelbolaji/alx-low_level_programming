#include <stdio.h>

struct dog {
    const char *name;
    float age;
    const char *owner;
};

void init_dog(struct dog *d, const char *name, float age, const char *owner) {
    d->name = name;
    d->age = age;
    d->owner = owner;
}
