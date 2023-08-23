#include <stdio.h>

/**
 * main - print out file name
 * @argc: number of params in command line
 * @argv: list of all pramas in command line
 * Return: Alaways (0).
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
