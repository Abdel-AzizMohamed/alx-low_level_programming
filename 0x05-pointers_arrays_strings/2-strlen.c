#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the length of string
 * @s: string
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
