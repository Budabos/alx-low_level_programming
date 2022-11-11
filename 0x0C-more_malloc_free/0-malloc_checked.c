#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checks malloc
 * @b: integer to check?
 * Return: a pointer or void
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);

	return (t);
}
