#include "main.h"
/**
 * _putchar - the character c to stdout
 * @c: char to print
 *
 * Return: On success 1, othir -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
