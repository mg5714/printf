#include "main.h"
/**
 * convertToBinary - convert integer to binary.
 * @num: integer number to be converted.
 * Return: void.
 */
void convertToBinary(unsigned int num)
{
int size = 32;
char *binary = malloc(sizeof(char) * size);
int j, i = 0;

if (num == 0 || num < 0)
{
	return (-1);
}

while (num > 0)
{
binary[i++] = num % 2 + '0' ;
num = num / 2;
}

for (j = i - 1; j >= 0; j--)
{
my_putchar(binary[j] + '0');
}
free(binary);
}

