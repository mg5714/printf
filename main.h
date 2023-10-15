#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c)
void convertToBinary(unsigned int num);
void printPointer(void *ptr);
<<<<<<< HEAD

void printLong(int value);
void printShort(int value);
void printUnsignedLong(unsigned int value);
void printUnsignedShort(unsigned int value);
void printOctalLong(unsigned int value);
void printHexLong(unsigned int value);
void printHexLongUppercase(unsigned int value);
void printOctalShort(unsigned int value);
void printHexShort(unsigned int value);
void printHexShortUppercase(unsigned int value);
=======
int printstr(va_list, arg_lst);
int _printf(const char *format, ...);
>>>>>>> 2379fdf99be8b212f78401b0bbaf050a0f4a9fd5

void write_buffer(char *buffer, int *buffer_index);

int _printf(const char *format, ...);
#endif
