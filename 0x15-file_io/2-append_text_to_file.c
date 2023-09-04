#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string pointer that will be appended in the file
 * Return: 1 if it succeds, 1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int str_len = 0, op, wr;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[str_len] != '\0')
			str_len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, str_len);

	if (op == -1)
		return (-1);

	if (wr == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(op);
		return (1);
	}

	close(op);
	return (1);
}

