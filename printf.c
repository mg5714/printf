#include "main.h"

/**
 * _printf - mimic the standard lib printf
 * @format: string
 * Return: int, the number of printed chars
 */

int _printf (const char *format, ...)
{
  int count = 0;
  char *str;
  va_list args;

  va_start (args, format);
  while (*format != '\0')
    {
      if (*format == '%')
	{
	  format++;
	  switch (*format)
	    {
	    case 'c':
	      count += _putchar (va_arg (args, int));
	      break;
	    case 's':
	      str = va_arg (args, char *);
	      while (*str)
		{
		  _putchar (*str);
		  str++;
		  count++;
		}
	      break;
	    case '%':
	      count += _putchar ('%');
	      break;
	    default:
	      count += _putchar ('%');
	      count += _putchar (*format);
	    }
	}
      else
	{
	  count += _putchar (*format);
	}
      format++;
    }

  va_end (args);

  return count;
}
