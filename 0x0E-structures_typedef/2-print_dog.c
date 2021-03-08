#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
*print_dog - print struct of dog
*@d: pointer
*Return : o
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name: (nil)\n");
	else
		printf("name: %s\n", d->name);
		printf("age: %f\n", d->age);
	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}
