#include <stdlib.h>
#include "main.h"


/**
 * strtow - split string by spaces
 * and return array of strings
 * @str: string
 * Return: array of strings
*/
char **strtow(char *str)
{
	int i, j = 0, splits, start = 0, end = 0;
	char **ptr;

	i = 0;

	if (str == '\0' || str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			splits++;
		i++;
	}

	ptr = (char **)malloc(sizeof(char *) * splits);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (str[end] != '\0')
	{
		if (str[end] == ' ')
		{
			ptr[j] = (char *)malloc(sizeof(char) * (end - start));
			while (start < end)
			{
				ptr[j][i] = str[start];
				start++;
				i++;
			}
			ptr[j][i] = '\0';
			j++;
			i = 0;
		}
		end++;
	}

	return (ptr);
}
