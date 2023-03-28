#include "main.h"

/**
* print_numbers - print out from 0 to 9
* Return: Alaways (0)
*/
void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar(48 + i);
	}

	_putchar(10);
}
