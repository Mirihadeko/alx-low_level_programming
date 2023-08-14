#include <stdio.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL) // check if the pointer is valid
        return;
    d->name = name; // assign the name field
    d->age = age; // assign the age field
    d->owner = owner; // assign the owner field
}

