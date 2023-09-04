#include "main.h"

/**
 * check_error - checks whether a file can be opened and read
 * @file_from: the file the content to be copied from
 * @file_to: the file the content will be copied to
 * @argv: array of arguments
 * Return: Nothing
 */

void check_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * close_f - Closes a file descriptors
 * @file: the file
 */

void close_f(int file)
{
	int cl;

	cl = close(file);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
}


/**
 * main - a program that copies the content of a file to another file
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	int from, to, re, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	check_error(from, to, argv);

	re = 1024;

	while (re == 1024)
	{
		re = read(from, buffer, 1024);
		if (re == -1)
			check_error(-1, 0, argv);
		wr = write(to, buffer, re);
		if (wr == -1)
			check_error(0, -1, argv);
	}
	close_f(from);
	close_f(to);
	return (0);
}





