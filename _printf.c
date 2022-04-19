#include "main.h"

typedef struct call
{
	char t;
	int (*f)(char *, va_list, int);
} call;

call container[] = {
		{'c', parse_char}, {'s', parse_string}, {'i', parse_int}, {'d', parse_int},
		{'%', parse_perc}, {'\0', NULL}
};
/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, buff_count = 0, prev_buff_count = 0;
	char *buffer;
	va_list arg;

	if (!format)
		return (-1);

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		free(buffer);
		return (-1);
	}

	va_start(arg, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			prev_buff_count = buff_count;
			for (j = 0; container[j].t != '\0'; j++)
			{
				if (format[i] == container[j].t)
				{
					buff_count = container[j].f(buffer, arg, buff_count);
					break;
				}
			}
			if (buff_count == prev_buff_count)
				buffer[buff_count] = format[i], buff_count++;
		}
		else
			buffer[buff_count] = format[i], buff_count++;
		i++;
	}
	va_end(arg);
	buffer[buff_count] = '\0';
	print_buff(buffer, buff_count);
	free(buffer);
	return (buff_count);
}
