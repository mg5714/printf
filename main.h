#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c)
void convertToBinary(unsigned int num);
void printPointer(void *ptr);
int printstr(va_list, arg_lst);
int _printf(const char *format, ...);

#endif
