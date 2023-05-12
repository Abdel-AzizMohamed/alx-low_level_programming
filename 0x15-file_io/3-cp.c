#include "main.h"

void copy_file(char *op_src, char *op_dis)
{
	char *buff;
	size_t length = 1024;

	op_src = open(filename, O_RDONLY);
	buff = malloc(sizeof(char) * length);
	re = read(op, buff, length);

	op_dis = (argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (buff == NULL)
	{
		exit(99);
	}

	while (re > 0)
	{	
		if (op_src == -1 || re == -1)
		{
			free(buff);
			perror("Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	
		wr = write(op_dis, buf, length);

		if (op_dis == -1 || wr == -1)
		{
			free(buff);
			perror("Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(open_src, buff, length);
		open_dis = open(argv[2], O_WRONLY | O_APPEND);
	}
	free (buff);
}

/**
 * append_text_to_file - append text to file
 * @filename: given file name
 * @text_content: text to write to
 * Return: in success 1 eles -1
*/
int main(int argc, char *argv[])
{
	ssize_t op_src, op_dis, re, wr, cl_src, cl_dis;
	char *buf;
	size_t length;

	if (argc < 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}


	cl_src = close(op_src);
	cl_dis = close(op_dis);

	if (cl_src == -1)
	{
		perror("Error: Can't close fd %d\n", op_src);
		exit(100);
	}
	else if (cl_dis == -1)
	{
		perror("Error: Can't close fd %d\n", op_dis);
		exit(100);
	}
	return (0);
}
