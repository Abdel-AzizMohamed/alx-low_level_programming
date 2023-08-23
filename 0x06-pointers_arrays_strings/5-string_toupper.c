#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts string lowercase letters
 * to uppercase
 * @s: the string
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (s[i] - 'a') + 'A';
		i++;
	}

	return (s);
}
