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
<<<<<<< HEAD
char parse_char(va_list arg);
int parse_string(va_list args, char *buff, unsigned int buff_count);
=======
int parse_string(va_list args, char *buff, unsigned int buff_count);
char parse_char(va_list arg);
>>>>>>> fbe18450ef0034d960a67500f449feb74226cf8e

#endif
