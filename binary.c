#include "main.h"
/**
 * convertToBinary - Convert integer to binary.
 * @buffer: Pointer to the binary string buffer.
 * @buffer_index: Pointer to the buffer index.
 * @char_count: Pointer to the character count.
 * @num: Integer number to be converted.
 */
void convertToBinary(char *buffer, int *buffer_index,
int *char_count, unsigned int num)
{
unsigned int binary[32];
int j, i = 0;

while (num > 0)
{
binary[i] = num % 2;
num = num / 2;
i++;
}

for (j = i - 1; j >= 0; j--)
{
my_putchar(binary[j] + '0');
process_character(buffer, buffer_index, char_count, binary[j]);
}
}
