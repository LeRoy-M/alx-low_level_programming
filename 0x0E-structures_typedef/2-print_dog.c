#include "dog.h"

/**
 * print_dog - Prints the input from struct dog
 *
 * @d: Pointer input from struct dog
 *
 * Return: Always void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (my_dog.name == NULL)
	{
		printf("Name: (nil)");
		return;
	}
	else if (my_dog.age == NULL)
	{
		printf("Age: (nil)");
		return;
	}
	else if (my_dog.owner == NULL)
	{
		printf("Owner: (nil)");
		return;
	}
	else
	{
		printf("Name: %s", my_dog.name);
		printf("Name: %.6f", my_dog.age);
		printf("Name: %s", my_dog.owner);
	}
}
