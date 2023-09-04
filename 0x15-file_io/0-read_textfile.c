#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to the name of file to be read
 * @letters: number of letters in file to be read and printed
 * Return: number of letters printed to std out
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == -1)
		return (0);

	re = read(op, buffer, letters);

	if (re == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, re);

	if (wr == -1)
		return (0);

	free(buffer);

	close(op);

	return (wr);
}


