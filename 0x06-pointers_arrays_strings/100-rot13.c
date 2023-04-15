#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode string with rot13
 * @s: the string
 * Return: encoded string
 */
char *rot13(char *s)
{
	unsigned int a, b;

	char c1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; a < sizeof(s); a++)
	{
		for (b = 0; b < sizeof(c1); b++)
		{
			if (s[a] == c1[b])
			{
				s[a] = c2[b];
				break;
			}
		}
	}

	return (s);
}
