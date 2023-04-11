#include "main.h"
#include <stdio.h>

/**
 * rev_string - revese a given string
 * @s: string
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int i, string_length, last_char, tmp;

	string_length = 0;
	last_char = 0;

	while (s[string_length] != '\0')
		string_length++;

	last_char = string_length - 1;

	for (i = 0; i < string_length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[last_char];
		s[last_char] = tmp;
		last_char--;
	}
}
