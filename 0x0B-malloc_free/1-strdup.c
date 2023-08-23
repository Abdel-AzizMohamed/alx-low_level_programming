#include <stdlib.h>
#include "main.h"


/**
 * _strdup - returns a pointer to
 * a newly allocated space in memory
 * @str: the pointer that will be dup
 * Return: NULL if str=NULL
 * else dup string
*/
char *_strdup(char *str)
{
	int len, i;
	char *ptr;

	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = (char *)malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(ptr + i) = *(str + i);

	*(ptr + i) = '\0';

	return (ptr);
}
