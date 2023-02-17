#include "main.h"

/**
 * read_textfile - Read a text file and print it to POSIX stdout
 * @filename: Filename
 * @letters: Number of letters to read and print
 * Return: Number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t op, wrt;

	if (filename == NULL)
		return (0);
	if ((op = open(filename, O_RDONLY)) == -1)
		return (0);
	if (read(op, buffer, letters) == -1)
		return (0);
	if ((wrt = write(STDOUT_FILENO, buffer, letters)) == -1)
		return (0);
	free(buffer);
	close(op);
	return (wrt);
}
