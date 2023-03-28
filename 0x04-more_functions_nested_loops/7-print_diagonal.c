#include "main.h"

/**
* print_diagonal - print a diagnal line
* @n: the length of the line
* Return: Alaways (0)
*/
void print_diagonal(int n)
{
	int i, sp;

	for (i = 1; i <= n; i++)
	{
		for (sp = 1; sp < i; sp++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);
}
