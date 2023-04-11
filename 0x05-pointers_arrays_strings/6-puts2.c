#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints out string by skiping a char every time
 * @str: string
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if ((i + 1) % 2 == 0)
		{
			i++;
			continue;
		}
		_putchar(str[i]);

		i++;
	}

	_putchar(10);
}
