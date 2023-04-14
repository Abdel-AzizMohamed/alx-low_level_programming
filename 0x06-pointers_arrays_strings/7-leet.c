#include "main.h"
#include <stdio.h>

/**
 * leet - encode string into 1337 
 * @s: the string
 * Return: encoded string
 */
char *leet(char *s)
{
	unsigned int a, b, c;

	char charList[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int intList[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;

		for (b = 0; b < sizeof(charList); b++)
		{
			if (charList[b] == s[a])
			{
				s[a] = intList[c];
			}
			c++;
		}
	}

	return (s);
}
