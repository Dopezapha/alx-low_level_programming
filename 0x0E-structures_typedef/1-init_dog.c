#include "dog.h"
/**
*init_dog - A function that initialize a variable of type struct dog.
*@d: pointer to the dog
*@name: The name of the dog
*@age: The age of the dog
*@owner: The owner of the dog
*Return: No return value
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
