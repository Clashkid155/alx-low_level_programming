#include "dog.h"
#include <stdio.h>

/**
* print_dog - Print the whole dog struct
* @d: Dog struct
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name == NULL ? d->name = "(nil)" : d->name;
		d->owner == NULL ? d->owner = "(nil)" : d->owner;
		d->age == .0 ? d->age = .0 : d->age;

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
