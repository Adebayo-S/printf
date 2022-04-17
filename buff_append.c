#include "main.h"

/**
 * buff_append - Concatinates the buffer characters
 * @buff_dest: buffer destination
 * @arg: pointer to va_arg return
 * @parse_char: pointer to parse_char function
 * Return: index of buffer pointer
 */

int buff_append(char *buff_dest, va_list arg, int buff_count, char type)
{
	switch (type)
	{
		case 'c':
				*buff_dest = parse_char(arg);
				buff_count++;
				return (buff_count);
				break;
		case 's':
				parse_string(*buff_dest, arg, buff_count);
				break;
	}
}
