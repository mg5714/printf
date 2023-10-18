#include "main.h"
/**
 * process_format - Processes the format specifier
 * and updates the buffer and count
 * @buffer: Pointer to the buffer
 * @buffer_index: Pointer to the buffer index
 * @char_count: Pointer to the character count
 * @args: The va_list arguments
 * @format: The format specifier character
 */
void process_format(char *buffer, int *buffer_index,
int *char_count, va_list args, char format)
{
switch (format)
{
case 'c':
{
process_character(buffer, buffer_index, char_count, va_arg(args, int));
break;
}
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
process_string(buffer, buffer_index, char_count, str);
break;
}
case '%':
process_character(buffer, buffer_index, char_count, '%');
break;
case 'b':
{
unsigned int num = va_arg(args, unsigned int);
convertToBinary(buffer, buffer_index, char_count, num);
break;
}
case 'i':
case 'd':
{
print_int(buffer, buffer_index, char_count, va_arg(args, int));
break;
}
default:
process_character(buffer, buffer_index, char_count, '%');
if (format != '\0')
process_character(buffer, buffer_index, char_count, format);
break;
}
}
