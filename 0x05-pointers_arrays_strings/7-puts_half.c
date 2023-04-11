#include "main.h"

/**
 * puts_half - prints the second half of string
 * @str: string to print the chars from
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2; i < len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}

	_putchar(10);
}
