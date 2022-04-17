#include "main.h"

/**
 * parse_char - returns the character
 * @rec: pointer to argument
 * Return: typecasted argument
 */
char parse_char(va_list arg)
{
	int arg_c = va_arg(arg, int);

	return ((char)arg_c);
}
