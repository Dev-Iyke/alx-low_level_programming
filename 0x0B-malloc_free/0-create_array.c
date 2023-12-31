#include "main.h"

/**
 * create_array - function that creates an array
 * @size: size of array
 * @c: parameter to store the array
 * Return: a ponter to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
