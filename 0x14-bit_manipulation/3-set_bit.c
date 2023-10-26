#include "main.h"

/**
 * set_bit - function to set the value of a bit to 1
 * @n: bit
 * @index: index of bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int change;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	change = 1;
	change = change << index;
	*n = ((*n) | change);
	return (1);
}
