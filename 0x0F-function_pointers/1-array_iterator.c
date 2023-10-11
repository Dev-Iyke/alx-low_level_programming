#include "function_pointers.h"

/**
 * array_iterator - function that executes on array items
 * @array: the array to execute or iterate over
 * @size: size of array
 * @action: action to take on the array items
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size; i++)
		action(array[i]);
}
