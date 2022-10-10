#ifndef DOG_H
#define DOG_H

/**
* struct dog - Just a dog
* @name: Ask the dog
* @age: Same with above
* @owner: Geezz!!
*
* Description: Go and ask your grandfather.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
* dog_t - Alt for struct dog
*/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /*DOG_H*/
