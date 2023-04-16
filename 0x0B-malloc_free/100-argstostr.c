#include <stdlib.h>
#include "main.h"


/**
 * argstostr - concat all the args that
 * given by command line
 * @ac: number of args
 * @av: 2d array contains all args
 * Return: concated args
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *ptr;

	len = 0;
	k = 0;

	if (ac || av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}

	ptr = (char *)malloc(sizeof(char) * len + 1);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		k++;
	}

	ptr[k] = '\0';

	return (ptr);
}
