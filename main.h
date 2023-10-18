#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/*void convertToHex(unsigned int num, char case);*/
/* void printPointer(char *buffer, int *buffer_index, int *char_count, void *ptr); */
/* int _strlen(char *s); */
/* */

/*
void convertToHex(unsigned int num, char case);
void printPointer(void *ptr);*/

/* void printLong(int value); */
/* void printShort(int value); */
/* void printUnsignedLong(unsigned int value); */
/* void printUnsignedShort(unsigned int value); */
/* void printOctalLong(unsigned int value); */
/* void printHexLong(unsigned int value); */
/* void printHexLongUppercase(unsigned int value); */
/* void printOctalShort(unsigned int value); */
/* void printHexShort(unsigned int value); */
/* void printHexShortUppercase(unsigned int value); */


int my_putchar(char c);
void convertToOctal(char *buffer, int *buffer_index, int *char_count, unsigned int num); 
void convertToBinary(char *buffer, int *buffer_index, int *char_count, unsigned int num);
void print_int(char *buffer, int *buffer_index, int *char_count, int value);

int printstr(va_list arg_lst);

void write_buffer(char *buffer, int *buffer_index, int *char_count);
void process_character(char *buffer, int *buffer_index, int *char_count, char character);
void process_string(char *buffer, int *buffer_index, int *char_count, char *str);
void process_format(char *buffer, int *buffer_index, int *char_count, va_list args, char format);
void handle_flags(char *buffer, int *buffer_index, int *char_count, const char *format);

/* int rot13(va_list lst); */
/* int reversed(va_list arg1); */
/* char *rev(char *x); */


int _printf(const char *format, ...);
#endif
