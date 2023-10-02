#include "main.h"

/**
 * _strspn - function that fills memory with constant byte
 * @s: param one
 * @accept: param two
 * Return: will return an unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (k = 0; s[i] != accept[k] ; k++)
		{
			if (accept[k] == '\0')
				return (i);
		}
	}
		return (0);
}
