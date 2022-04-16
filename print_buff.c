#include "main.h"

/**
 * print_buff - prints buffer
 * @buff: buffer pointer
 * @nbuff: number of bytes to print
 * Return: number of bytes printed
 */
int print_buff(char *buff, unsigned int nbuff)
{
	return (write(1, buff, nbuff));
}