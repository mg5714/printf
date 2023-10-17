#include "main.h"

/**
 * _printf - Prints formatted output to stdout
 * @format: A character string.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
char buffer[BUFF_SIZE];
int buffer_index = 0;
int char_count = 0;
va_list args;
va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
handle_flags(buffer, &buffer_index, &char_count, format);
process_format(buffer, &buffer_index, &char_count, args, *format);
}
else
{
process_character(buffer, &buffer_index, &char_count, *format);
}

if (buffer_index == BUFF_SIZE)
{
write_buffer(buffer, &buffer_index, &char_count);
}

format++;
}

if (buffer_index > 0)
{
write_buffer(buffer, &buffer_index, &char_count);
}

va_end(args);

return (char_count);
}
