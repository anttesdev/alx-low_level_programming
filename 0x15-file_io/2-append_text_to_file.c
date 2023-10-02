#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, letters = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[letters] != '\0')
			letters++;

		wr = write(op, text_content, letters);

		if (wr == -1)
		return (-1);
	}

	close(op);
	return (1);
}



