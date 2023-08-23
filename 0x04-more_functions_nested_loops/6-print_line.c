#include "main.h"

/**
* print_line - print out stright line
* @n: number of slashs
* Return: Alaways (0)
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}

	_putchar(10);
}
