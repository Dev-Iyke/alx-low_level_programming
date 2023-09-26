#include "main.h"

/**
 * _strstr - function that fills memory with constant byte
 * @haystack: param one
 * @needle: param two
 * Return: will return an unsigned int
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')
	{
	I++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);

}
