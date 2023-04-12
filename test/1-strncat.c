#include "main.h"

/**
 * _strcat : concatenates to string
 * @src: copied string
 * @dest: destintion string
 * Return: concated string
 */
char *_strcat(char *dest, char *src)
{
	int srcLen, destLen;

	srcLen = 0;
	destLen = 0;

	while (dest[destLen] != '\0')
		destLen++;

	while (src[srcLen] != '\0')
	{
		dest[destLen] = src[srcLen];
		srcLen++;
		destLen++;
	}

	dest[destLen] = '\0';

	return (dest);
}
