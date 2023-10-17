#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i;
for (i = 0; *s != '\0'; s++)
i++;
return (i);
}

/**
 * printPointer - Prints a pointer value to the buffer
 * @buffer: Pointer to the buffer
 * @buffer_index: Pointer to the buffer index
 * @char_count: Pointer to the character count
 * @ptr: The pointer value to print
 */
void printPointer(char *buffer, int *buffer_index, int *char_count, void *ptr)
{
sprintf(buffer + *buffer_index, "%p", ptr);
*buffer_index += _strlen(buffer + *buffer_index);
*char_count += _strlen(buffer + *buffer_index);
}


/**
 * print_int - Handles the d and i.
* @buffer: Pointer to the buffer
* @buffer_index: Pointer tobuffer index
* @char_count: Pointer to character count
* @args:va_list arguments
*/
void print_int(char *buffer, int *buffer_index,
int *char_count, va_list args)
{
int num = va_arg(args, int);
sprintf(buffer + *buffer_index, "%d", num);
*buffer_index += _strlen(buffer + *buffer_index);
*char_count += _strlen(buffer + *buffer_index);
}
