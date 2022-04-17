#include "main.h"

/**
 * parse_string - writes the string
 * @string: character string
 * @arg: list of arguments
 * @buff_count: index f buffer pointer
 * Return: The number of characters printed.
 */
int parse_string(char *string, va_list arg, int buff_count)
{
	char *value;
	int i;

	value = va_arg(arg, char *);
	if (value == NULL)
		value = "(null)";
	for (i = 0; value[i]; i++, buff_count)
		string[buff_count] = value[i];

	return (buff_count);
}