#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: function parameter
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
