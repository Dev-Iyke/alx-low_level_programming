#include <stdio.h>

/**
 * main - function to print all arguments passed in
 * @argc: parameter that counts number of arguments
 * @argv: parameter that points to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
