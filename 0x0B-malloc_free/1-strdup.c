#include "main.h"

/**
 * _strdup - function that copies string to new memory
 * @str: function parameter
 * Return: a pointer to new memory
 */

char *_strdup(char *str)
{
	char *cp;
	int counter = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		counter++;
	cp = malloc(sizeof(char) * counter + 1);

	if (cp == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cp[i] = str[i];

	return (cp);
}
