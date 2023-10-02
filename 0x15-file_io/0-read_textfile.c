#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: the name of the file to be read
 * @letters: the number of letters it should read and print
 * Return: 0 if file can not be opened or read, if filename is NULL
 *	   the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, re, wr;
	char *temp;

	temp = malloc(sizeof(char) * (letters));

	if (filename == NULL || temp == NULL)
	{
		free(temp);
		return (0);
	}

	op = open(filename, O_RDONLY);

	if (op == -1)
		return (0);

	re = read(op, temp, letters);

	if (re == -1)
		return (0);

	wr = write(STDOUT_FILENO, temp, re);

	close(op);
	free(temp);
	return (wr);
}
