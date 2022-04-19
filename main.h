#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int buff_append(char *buff_dest, va_list arg, int buff_count, char type);
int print_buff(char *buff, unsigned int nbuff);
int str_len(char *s);
char *_strcpy(char *dest, char *src);
int parse_char(char *buff_dest, va_list arg, int buff_count);
int parse_string(char *buff_dest, va_list arg, int buff_count);
int parse_int(char *string, va_list list, int buff_count);
int parse_perc(char *buff_dest, va_list arg, int buff_count);

#endif
