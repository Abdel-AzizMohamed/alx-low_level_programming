#include "main.h"

/**
 * _strncat - concatenates to string with a given max bytes
 * @src: copied string
 * @dest: destintion string
 * @n: max bytes
 * Return: concated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0' || dest[i] == '\0')
			break;
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

