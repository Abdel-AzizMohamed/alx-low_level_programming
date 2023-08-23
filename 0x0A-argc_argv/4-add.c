#include <stdio.h>


/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * checkNum - check if there is a char
 * @s: string to be converted
 * Return: 0 if thers is char
 * else 1
 */
int checkNum(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * main - multiplies 2 numbers given by
 * command line
 * @argc: number of params in command line
 * @argv: list of all pramas in command line
 * Return: Alaways (0).
*/
int main(int argc, char *argv[])
{
	int i, result;

	result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			if (checkNum(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			result += _atoi(argv[i]);
		}
	}

	printf("%d\n", result);

	return (0);
}
