#include "main.h"

/**
 * process_format - Processes the format specifier and updates the buffer and count
 * @buffer: Pointer to the buffer
 * @buffer_index: Pointer to the buffer index
 * @char_count: Pointer to the character count
 * @args: The va_list arguments
 * @format: The format specifier character
 */
void process_format(char *buffer, int *buffer_index, int *char_count, va_list args, char format)
{
    switch (format)
    {
        case 'c':
        {
            char c = (char)va_arg(args, int);
            process_character(buffer, buffer_index, char_count, c);
            break;
        }
        case 's':
        {
            char *str = va_arg(args, char *);
            process_string(buffer, buffer_index, char_count, str);
            break;
        }
        case '%':
            process_character(buffer, buffer_index, char_count, '%');
            break;
        default:
            process_character(buffer, buffer_index, char_count, '%');
            process_character(buffer, buffer_index, char_count, format);
            break;
    }
}
