#include "main.h"

/**
 * _strncat - concatenates to string with a given max bytes
 * @src: copied string
 * @dest: destintion string
 * @n: max bytes
 * Return: concated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, destLen;

	destLen = 0;

	while (dest[destLen] != '\0')
	destLen++;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[destLen++] = src[i];
	}

	dest[destLen] = '\0';

	return (dest);
}

