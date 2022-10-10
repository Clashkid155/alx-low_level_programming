#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
* _strlen - Check string length
*
* @s: Input string.
*
* Return: string length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
* new_dog - Create a new dog with dog_t
* @name: String
* @age: Float
* @owner: String
*
* Return: dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sp;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	sp  = malloc(sizeof(dog_t));
	if (sp == NULL)
		return (NULL);

	sp->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (sp->name == NULL)
	{
		free(sp);
		return (NULL);
	}

	sp->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (sp->owner == NULL)
	{
		free(sp->name);
		free(sp);
		return (NULL);
	}

	sp->name = _strcpy(sp->name, name);
	sp->age = age;
	sp->owner = _strcpy(sp->owner, owner);
	return (sp);
}
