#include "main.h"

/**
 * _isupper - check if the char is upper.
 * @c: integer parameter (ascii code for a character)
 * Return: Always 0.
 */

int _isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
