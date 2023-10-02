#include "main.h"
#define BUFFER 1024

/**
 * handle_error - a function to check whether a
 * file can be opened or not
 * @src: source file
 * @dest: destination file
 * @argv: number of arguments
 * Return: Nothing
 */

void handle_error(int src, int dest, char **argv)
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 is sucess
 */

int main(int argc, char **argv)
{
	int src, dest, close_err, char_count, wr;
	char buff[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	handle_error(src, dest, argv);

	char_count = BUFFER;

	while (char_count == 1024)
	{
		char_count = read(src, buff, 1024);
		if (char_count == -1)
			handle_error(-1, 0, argv);
		wr = write(dest, buff, char_count);
		if (wr == -1)
			handle_error(0, -1, argv);
	}

	close_err = close(dest);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}

	return (0);
}
