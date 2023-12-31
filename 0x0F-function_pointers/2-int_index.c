#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array to search through
 * @size: size of the array
 * @cmp: the comparer function
 * Return: will return an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
