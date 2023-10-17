#include "main.h"
/**
 * printPointer - Prints a pointer value to the buffer
 * @buffer: Pointer to the buffer
 * @buffer_index: Pointer to the buffer index
 * @char_count: Pointer to the character count
 * @ptr: The pointer value to print
 */
void printPointer(char *buffer, int *buffer_index, int *char_count, void *ptr)
{
unsigned long num = (unsigned long)ptr;
int i, start, end;
i = *buffer_index;
do {
buffer[i++] = "0123456789abcdef"[num % 16];
num /= 16;
} while (num > 0);
buffer[i++] = 'x';
buffer[i++] = '0';
start = *buffer_index;
end = i - 1;
while (start < end)
{
char temp = buffer[start];
buffer[start] = buffer[end];
buffer[end] = temp;
start++;
end--;
}
*buffer_index = i;
*char_count += i - *buffer_index;
}
