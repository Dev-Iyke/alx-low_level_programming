#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: param one
 * @src: param two
 * @n: param three
 * Return: will return a character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
