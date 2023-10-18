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
int size = 32;
int j, i = 0;
char new;

char *binary = malloc(sizeof(char) * size);

if (num == NULL || num < 0)
{
	return (-1);
}

while (num > 0)
{
binary[i++] = num % 2 + '0' ;
num = num / 2;
}
for (int j = 0; j < i / 2; j++)
{
<<<<<<< HEAD
my_putchar(binary[j] + '0');
process_character(buffer, buffer_index, char_count, binary[i]);
}
=======
char new = binary[j];
binary[j] = binary[i - j - 1];
binary[i - j - 1] = new;
}

for (j = i - 1; j >= 0; j++)
{
my_putchar(binary[j]);
}
free(binary);
>>>>>>> 5d9a09963a04be3088c2b777c221f98511ba34b4
}
