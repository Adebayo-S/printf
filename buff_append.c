#include "main.h"

/**
 * buff_append - Concatinates the buffer characters
 * @buff: buffer pointer
 * @c: character
 * @ibuff: index of buffer pointer
 * Return: index of buffer pointer
 */

unsigned int buff_append(char *buff, char c, unsigned int ibuff)
{
	if (ibuff == 1000)
	{
		print_buf(buff, ibuff);
		ibuff = 0;
	}

	buff[ibuff] = c;
	ibuff++;
	return (ibuff);
}