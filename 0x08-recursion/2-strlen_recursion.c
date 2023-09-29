#include "main.h"

/**
 * _strlen_recursion - function that gives the length of a string
 * @s: param one
 * Return: will return an integer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);

}
