#include "main.h"


/**
 * append_text_to_file - append text to file
 * @filename: given file name
 * @text_content: text to write to
 * Return: in success 1 eles -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t op, wr;
	size_t len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);
	return (1);
}
