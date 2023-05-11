#include "main.h"


/**
 * read_textfile - reads out a text file and print it out
 * @filename: given file name
 * @letters: length of readed letters
 * Return: in success readed lettres
 * eles 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);

	op = open(filename, O_RDONLY);
	re = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);
	return (w);
}
