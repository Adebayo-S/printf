#include "main.h"

/**
 * itoa_buff - Function converts an integer to a string.
 * @value: character
 * @buff: buffer pointer
 * @base: integer base
 * Return: Integer
 */

// Implementation of itoa()
char *itoa_buff(int value, char *buffer, int base)
{
	// invalid input
	if (base < 2 || base > 32)
	{
		return buffer;
	}

	// consider the absolute value of the number
	int n = abs(value);

	int i = 0;
	while (n)
	{
		int r = n % base;

		if (r >= 10)
		{
			buffer[i++] = 65 + (r - 10);
		}
		else
		{
			buffer[i++] = 48 + r;
		}

		n = n / base;
	}

	// if the number is 0
	if (i == 0)
	{
		buffer[i++] = '0';
	}

	// If the base is 10 and the value is negative, the resulting string
	// is preceded with a minus sign (-)
	// With any other base, value is always considered unsigned
	if (value < 0 && base == 10)
	{
		buffer[i++] = '-';
	}

	buffer[i] = '\0'; // null terminate string

	// reverse the string and return it
	return reverse(buffer, 0, i - 1);
}
