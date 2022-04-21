#include "main.h"
/**
 * parse_rev - substitute %r by argument number in reverse
 * @buff_dest: string to change
 * @arg: va_list char to change
 * @buff_count: index of dst where the c of %c is
 * Return: New index
 */
int parse_rev(char *buff_dest, va_list arg, int buff_count)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str)
	{
		while (str[i] != '\0')
			i++;
		i = i - 1;
		while (i >= 0)
		{
			buff_dest[buff_count] = str[i];
			buff_count++;
			i--;
		}
	}
	return (buff_count);
}
