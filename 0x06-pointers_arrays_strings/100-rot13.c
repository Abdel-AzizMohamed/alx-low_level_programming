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

	char charListFirst[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char charListSecond[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzABCDEFGHIJKLM";

	for (a = 0; a < sizeof(s); a++)
	{
		for (b = 0; b < sizeof(charListFirst); b++)
		{
			if (s[a] == charListFirst[b])
			{
				s[a] = charListSecond[b];
				break;
			}
		}
	}

	return (s);
}
