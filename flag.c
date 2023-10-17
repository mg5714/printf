#include "main.h"
/**
 * handle_flags - Handles the flag characters and pass it to buffer.
 * @buffer: Pointer to buffer
 * @buffer_index: Pointer to buffer_index
 * @char_count: Pointer to the character count
 * @format: Pointer to specifier
 */
void handle_flags(char *buffer, int *buffer_index,
int *char_count, const char *format)
{
while (*format == '+' || *format == ' ' ||
*format == '#' || *format == '0' || *format == '-')
{
process_character(buffer, buffer_index, char_count, *format);
format++;
}
if (*format == 'l' || *format == 'h')
{
process_character(buffer, buffer_index, char_count, *format);
format++;
}
}
