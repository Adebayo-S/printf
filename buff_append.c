#include "main.h"

/**
 * buff_append - Concatinates the buffer characters
 * @buff: buffer pointer
 * @c: character
 * @ibuff: index of buffer pointer
 * Return: index of buffer pointer
 */

unsigned int buff_append(char *buff, char *c, char (*parse_char)(char))
{
	*buff = parse_char(*c);
}