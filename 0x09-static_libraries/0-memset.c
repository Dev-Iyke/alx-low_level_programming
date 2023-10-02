#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: param one
 * @b: param two
 * @n: param three
 * Return: will return a character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
