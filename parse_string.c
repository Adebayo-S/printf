#include "main.h"

/**
 * parse_string - writes the string
 * @args: string list of arguments
 * @buff: a character string
 * @buff_count: index for buffer pointer
 * Return: The number of characters printed.
 */
int parse_string(va_list args, char *buff, unsigned int buff_count)
{
    char *str;
    unsigned int i;
    char nill[] = "(null)";

    str = va_arg(args, char *);
    if (str == NULL)
    {
        for (i = 0; nill[i]; i++)
            buff_count = buff_append(buff, nill[i], buff_count);
        return (6);
    }
    for (i = 0; str[i]; i++)
        buff_count = buff_append(buff, str[i], buff_count);
    return (i);
}