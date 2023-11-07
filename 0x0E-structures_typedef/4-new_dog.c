#include <stdlib.h>
#include "dog.h"
/**
* _strdup - duplicates a string
* @str: string to duplicate
* Return: A pointer to the newly duplicated string
*/
char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
		dup = malloc(len + 1);
	}
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
		return (dup);
	}
}

/**
* new_dog - creates a new dog
* @name: The name of the dog.
* @age: The age of the dog
* @owner: The owner of the dog
* Return: The pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
