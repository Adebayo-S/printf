#include "main.h"

/**
 * parse_str - writes the string
 * @buff_dest: character string
 * @arg: list of arguments
 * @buff_count: index f buffer pointer
 * Return: The number of characters printed.
 */
int parse_str(char *buff_dest, va_list arg, int buff_count)
{
	char *str;
	int i = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";

	if (str[0] == '\0')
	{
		buff_dest[buff_count] = '\0';
		buff_count++;
	}

	while (str[i] != '\0')
	{
		buff_dest[buff_count] = str[i];
		i++;
		buff_count++;
	}

	return (buff_count);
}
