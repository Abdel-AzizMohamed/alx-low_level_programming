#include <stdlib.h>
#include "main.h"


/**
 * str_concat - concat 2 strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if str=NULL
 * else concated string
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *ptr;

	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;

	while (s1 && s1[len1] != '\0')
		len1++;

	while (s2 && s2[len2] != '\0')
		len2++;

	ptr = (char *)malloc(sizeof(char) * (len1 + len2) + 1);

	if (ptr == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			ptr[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < len1 + len2)
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
	}

	*(ptr + i) = '\0';

	return (ptr);
}
