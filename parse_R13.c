#include "main.h"

/**
 * parse_R13 - substitute %R by argument number in rot13
 * @buff_dest: string to change
 * @arg: va_list char to change
 * @buff_count: index of dst where the c of %c is
 * Return: New index
 */
int parse_R13(char *buff_dest, va_list arg, int buff_count)
{
    char *str;
    char *keyset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *keynew = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
    int key_i, carry = 0;

    str = va_arg(arg, char *);
    while (str[carry])
    {
        for (key_i = 0; keyset[key_i]; key_i++)
        {
            if (str[carry] == keyset[key_i])
            {
                buff_dest[buff_count] = keynew[key_i];
                break;
            }
            buff_dest[buff_count] = str[carry];
        }
        buff_count++;
        carry++;
    }
    return (buff_count);
}
