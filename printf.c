#include "main.h"
/**
 * _printf: Prints formatted output to stdout.
 *@format: is a character string.
*Return: Returns the number of characters printed.
*/
int
_printf (const char *format, ...)
{
va_list args;
va_start (args, format);

char buffer[BUFF_SIZE];
int buffer_index = 0;
int char_count = 0;

while (*format)
{
if (*format == '%')
{
format++;

switch (*format)
{
case 'c':
{
char c = (char) va_arg (args, int);
buffer[buffer_index++] = c;
char_count++;
break;
}
case 's':
{
char *str = va_arg (args, char *);
int i = 0;
while (str[i])
{
buffer[buffer_index++] = str[i++];
if (buffer_index == BUFF_SIZE)
write_buffer (buffer, &buffer_index);
}
char_count += i;
break;
}
case '%':
buffer[buffer_index++] = '%';
char_count++;
break;
default:
buffer[buffer_index++] = '%';
buffer[buffer_index++] = *format;
char_count += 2;
break;
}
}
else
{
buffer[buffer_index++] = *format;
char_count++;
}

// Flush the buffer if it its full
if (buffer_index == BUFF_SIZE)
write_buffer (buffer, &buffer_index);

format++;
}

// Write any characters in the buffer
if (buffer_index > 0)
write_buffer (buffer, &buffer_index);

va_end (args);

return (char_count);
}
