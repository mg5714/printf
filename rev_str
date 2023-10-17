#include "main.h"

/**
 * rev - function that takes a pointer and return reversed string
 * @x: input string pointer
 * Return: reversed string
 */

char *rev(char *x)
{
	int length;
	char new;
	char *first, *last;

	if (x == NULL)
	{
		return (NULL);
	}

	length = 0;
	first = x;
	last = x;
	while (*last != '\0')
	{
		last++;
		length++;
	}
	last--;
	while (first < last)
	{
		new = *first;
		*first = *last;
		*last = new;
		first++;
		last--;
	}
	return (x);
}

/**
 * reversed - prints the reversed string
 * @arg1: argument
 * Return: the number of printed charecters
 */

int reversed(va_list arg1)
{
	int n = 0;
	char *ptr;
	char *str = va_arg(arg1, char *);

	if (str == NULL)
			{
			return (-1);
			}
	ptr = rev(str);
	if (ptr == NULL)
	{
		return (-1);
	}
	for (n = 0; ptr[n] != '0'; n++)
	{
		_putchar(ptr[n]);
	}
	return (n);
}

