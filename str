#include "main.h"
/**
 * printstr - Function that prints a string
 * @arg_lst: list of arguments
 * Return: int, number of printed chars
 */

int printstr(va_list arg_lst)
{
	char *string;
	int iteration;

	string = va_arg(arg_lst, char *);
	if (string == NULL)
	{
		return (-1);
	}
	else
	{
		for (iteration = 0; string[iteration] != '\0'; iteration++)
		{
			_putchar(string[iteration]);
		}
		return (iteration);
	}
}
