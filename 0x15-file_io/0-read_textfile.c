#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: the file to read
 * @letters: number of letters to be printed
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wr);
}
