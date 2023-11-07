#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
*print_dog - a function that prints a struct dog
*@d: pointer to the struct dog.
*Return: This function does not return a value.
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
