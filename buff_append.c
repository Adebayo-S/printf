#include "main.h"

/**
 * buff_append - Concatinates the buffer characters
 * @buff_dest: buffer destination
 * @arg: pointer to va_arg return
 * @parse_char: pointer to parse_char function
 * Return: index of buffer pointer
 */

char buff_append(char *buff_dest, va_list arg, unsigned int buff_count, char (*parser)(va_list))
{
	int arg_c = va_arg(arg, int);

	*buff_dest = parser(arg);
	buff_count++;

	return (buff_count);
}
