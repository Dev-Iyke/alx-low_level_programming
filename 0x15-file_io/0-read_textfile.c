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
	int fd;
	ssize_t nread, nwrite;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nread = read(fd, buff, letters);
	nwrite = write(STDOUT_FILENO, buff, nread);

	close(fd);
	free(buff);

	return (nwrite);
}
