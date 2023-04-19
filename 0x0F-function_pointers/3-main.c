#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - perform op in a given args
 * @argc: num of arguments
 * @argv: arguments
 * Return: Alawas (0)
*/
int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[3]);
	char *op = argv[2];
	int (*funOp)(int, int);

	funOP = get_op_func();

	else if (funOp == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else if ((op == '/' || op == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", funOp(n1, n2));

	return (0);
}
