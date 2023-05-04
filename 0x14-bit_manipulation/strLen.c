/**
 * strLen - get the string length
 * @str: string
 * Return: string length
*/
int strLen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
