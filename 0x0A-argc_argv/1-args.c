#include <stdio.h>

/**
 * main - print out file name
 * @argc: number of params in command line
 * @argv: list of all pramas in command line
 * Return: Alaways (0).
*/
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
