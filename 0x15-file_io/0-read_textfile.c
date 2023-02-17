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
	ssize_t op, rd, wrt;

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);

	if (filename == NULL || op == -1 || rd == -1 || wrt == -1)
		return (0);
	free(buffer);
	close(op);
	return (wrt);
}
