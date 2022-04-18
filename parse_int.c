#include "main.h"

/**
 * parse_int - substitute %i by argument number
 * @buff_dest: string to change
 * @list: va_list char to change
 * @buff_count: index of dst where the c of %c is
 * Return: New index
 */
int parse_int(char *buff_dest, va_list list, int buff_count)
{
	int tens = 1;
	unsigned int tmp;
	int number;

	number = va_arg(list, int);

	if (number < 0)
	{
		buff_dest[buff_count] = '-';
		buff_count++;
		number = -number;
	}
	tmp = number;

	if (number == INT_MIN)
	{
		tmp++;
	}

	while (tmp > 9)
	{
		tens = tens * 10;
		tmp = tmp / 10;
	}

	tmp = number;
	while (tens > 0)
	{
		buff_dest[buff_count] = ('0' + tmp / tens);
		buff_count++;
		tmp %= tens;
		tens /= 10;
	}
	return (buff_count);
}