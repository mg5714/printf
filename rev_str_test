#include "main.h"

/**
 * reversed - prints the reversed string
 * @arg1: argument
 * Return: the number of printed charecters
 */

int reversed(va_list arg1)
{
    int n = 0;
    char *str = va_arg(arg1, char *);
    if (str == NULL)
    {
        return (-1);
    }
    char *ptr = rev(str);
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

/**
 * rev - function that takes a pointer and return reversed string
 * @x: input string pointer
 * Return: reversed string
 */

char *rev(char *x)
{
    if (x == NUll)
    {
        return (NULL);
    }

    int length = 0;
    char *first = x;
    char *last = x;

    while (*last != '\0')
    {
        last++;
        length++
    }
    last--;
    while (first < last)
    {
        char new = *first;
        *first = *last;
        *last = n_new;
        first++;
        last--;
    }
    return x;
}
