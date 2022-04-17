#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
char buff_append(char *buff_dest, va_list arg, unsigned int buff_count, char (*parser)(va_list));
int print_buff(char *buff, unsigned int nbuff);
int str_len(char *s);
char *_strcpy(char *dest, char *src);
char parse_char(va_list arg);

#endif
