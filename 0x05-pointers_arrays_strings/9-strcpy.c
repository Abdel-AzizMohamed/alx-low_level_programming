#include "main.h"

/**
 * _strcpy - copy the string pointed to src
 * including null byte (\0) to the dest
 * @src: copied string
 * @dest: desntion string
 * Return: dest string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
