#include "main.h"

/**
 * parse_int - substitute %i by argument number
 * @buff_dest: string to change
 * @arg: va_list arg to change
 * @buff_count: index of dst where the c of %c is
 * Return: New index
 */
int parse_int(char *buff_dest, va_list arg, int buff_count)
{
	int tens = 1;
	unsigned int tmp;
	int number;

	number = va_arg(arg, int);

	if (number < 0)
	{
		buff_dest[buff_count] = '-';
		number *= -1;
		buff_count++;
	}
	tmp = number;

	if (number == INT_MIN)
		tmp++;

	while (tmp > 9)
	{
		tens *= 10;
		tmp /= 10;
	}

	tmp = number;
	while (tens > 0)
	{
		buff_dest[buff_count] = ('0' + tmp / tens);
		tmp %= tens;
		tens /= 10;
		buff_count++;
	}

	return (buff_count);
}
