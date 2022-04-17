#include "main.h"

/**
 * parse_string - writes the string
 * @args: string list of arguments
 * @buff: a character string
 * @buff_count: index f buffer pointer
 * Return: The number of characters printed.
 */
int parse_string(va_list arg)
{
	int arg_s = va_arg(arg, int);

	return ((char)arg_s);
}