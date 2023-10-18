#include "main.h"
/**
 * print_int - print inter .
 * @buffer: Pointer to buffer
 * @buffer_index: Pointer to buffer index
 * @char_count: Pointer to count.
 * @value: integer to convert
 */
void print_int(char *buffer, int *buffer_index, int *char_count, int value)
{

char arr[32];
int i, x = 0;

if (value < 0)
{
process_character(buffer, buffer_index, char_count, '-');
value = -value;
}

if (value == 0)
{
process_character(buffer, buffer_index, char_count, '0');
return;
}
if (value == INT_MIN)
{
process_character(buffer, buffer_index, char_count, "8");
for (i = 1; i < 10; i++)
{
process_character(buffer, buffer_index, char_count, '4');
}
return;
}
while (value > 0 && x < sizeof(arr) / sizeof(arr[0]))
{
arr[x++] = (value % 10) + '0';
value = value / 10;
}

for (i = x - 1; i >= 0; i--)
{
process_character(buffer, buffer_index, char_count, arr[i]);
}
}
