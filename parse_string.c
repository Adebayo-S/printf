#include "main.h"

/**
 * parse_string - writes the string
 * @buff_dest: character string
 * @arg: list of arguments
 * @buff_count: index f buffer pointer
 * Return: The number of characters printed.
 */
int parse_string(char *buff_dest, va_list arg, int buff_count)
{
	char *value;
	int i = 0;

	value = va_arg(arg, char *);
	if (value == NULL)
		value = "(null)";

	while (value[i] != '\0')
	{
		buff_dest[buff_count] = value[i];
		i++;
		buff_count++;
	}

	return (buff_count);
}
