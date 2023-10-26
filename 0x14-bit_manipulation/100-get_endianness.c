#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: always 0;
 */

int get_endianness(void)
{
	unsigned int f;
	char *c;

	f = 1;
	c = (char *) &f;

	return ((int)*c);
}
