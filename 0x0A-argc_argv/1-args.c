#include <stdio.h>

/**
 * main - function to print number of arguments passed in
 * @argc: parameter that counts number of arguments
 * @argv: parameter that points to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
