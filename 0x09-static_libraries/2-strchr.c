#include "main.h"

/**
 * _strchr - function that fills memory with constant byte
 * @s: param one
 * @c: param two
 * Return: will return a character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
		if (*s == c)
			return (s);
		return (NULL);
}
