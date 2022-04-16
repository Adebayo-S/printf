#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */

int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i, j;
	char* buffer;

	if (!format)
		return (-1);

	buffer = malloc(sizeof(char) * 1500);
	if (!buffer)
	{
		return (-1);
		free(buffer);
	}

	va_start(arg, format);
	i = 0, j = 0;
	while (format && format[i] != '\0')
	{
		buffer[j] = format[i];

		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case '%': {buff_append(buffer[j], format[i + 1], parse_char()); j++; break;}
				case 'c': {buff_append(buffer[j], (char)va_arg(arg, int)); j++; break;}
			}
		}
		i++;
	}
}
