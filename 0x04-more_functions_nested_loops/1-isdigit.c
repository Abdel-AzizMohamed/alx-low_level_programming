#include "main.h"

/**
* _isdigit - check if the given char is a digit
* @c: integer parm (asscii code for chars)
* Return: Alaways 0
*/
int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
