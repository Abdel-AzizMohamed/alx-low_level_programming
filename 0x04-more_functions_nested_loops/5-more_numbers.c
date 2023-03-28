#include "main.h"

/**
* more_numbers - print out 10 times from 0 to 14
* Return: Alaways (0)
*/
void more_numbers(void)
{
	int i, e;

	for (i = 0; i <= 10; i++)
	{
		for (e = 0; e <= 14; e++)
		{
			int ch = 48 + (e % 10);

			if (e > 9)
				_putchar(49);

			_putchar(ch);
		}
		_putchar(10);
	}
}
