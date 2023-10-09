#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: function parameter
 * @max: function parameter
 * Return: usually 0
 */

int *array_range(int min, int max)
{
	int *m, i = 0;

	if (min > max)
		return (NULL);

	m = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (m == NULL)
		return (NULL);

	while (min <= max)
	{
		m[i] = min;
		i++;
		min++;
	}

	return (m);
}
