#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
void convertToBinary(unsigned int num);
void printPointer(void *ptr);

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

int printstr(va_list arg_lst);
int _printf(const char *format, ...);

void write_buffer(char *buffer, int *buffer_index, int *char_count);
void process_character(char *buffer, int *buffer_index, int *char_count, char character);
void process_string(char *buffer, int *buffer_index, int *char_count, char *str);
void process_format(char *buffer, int *buffer_index, int *char_count, va_list args, char format);

int _printf(const char *format, ...);
#endif
