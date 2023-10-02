#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, letters = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (op == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[letters] != '\0')
		letters++;

	wr = write(op, text_content, letters);

	if (wr == -1)
		return (-1);

	close(op);
	return (1);
}



