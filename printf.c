#include "main.h"

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
	      count += putchar (va_arg (args, int));
	      break;
	    case 's':
	      str = va_arg (args, char *);
	      while (*str)
		{
		  putchar (*str);
		  str++;
		  count++;
		}
	      break;
	    case '%':
	      count += putchar ('%');
	      break;
	    default:
	      count += putchar ('%');
	      count += putchar (*format);
	    }
	}
      else
	{
	  count += putchar (*format);
	}
      format++;
    }

  va_end (args);

  return count;
}
