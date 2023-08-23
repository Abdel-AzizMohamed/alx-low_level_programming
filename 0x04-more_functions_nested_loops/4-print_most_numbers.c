#include "main.h"

/**
* print_most_numbers - print from 0 to 9 without 2, 4
* Return: Alaways (0)
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int ch = i + 48;

		if (ch == 50 || ch == 52)
			continue;

		_putchar(ch);
	}

	_putchar(10);
}
