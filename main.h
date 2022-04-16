#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
unsigned int buff_append(char *buff, char *c, char (*parse_char)(char));
int print_buff(char *buff, unsigned int nbuff);
int str_len(char *s);
char *_strcpy(char *dest, char *src);

#endif
