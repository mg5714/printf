#include "main.h"

/**
 * rot13 - manipulate a string into a rot13
 * @lst: function argument
 * Return: the processed string
 */
int rot13(va_list lst)
{
	int n, m;
	char *str = va_arg(lst, char *);
	char og[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
	{
		return (-1);
	}

	for (n = 0; str[n] != '\0'; n++)
	{
		for (m = 0; m <= 52; m++)
		{
			if (str[n] == og[m])
			{
				_putchar(new[n]);
			}
		}
		if (m == 53)
		{
			_putchar(str[n]);
		}
	}
	return m;
}
