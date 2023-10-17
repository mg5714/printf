#include "main.h"
/**
 * convertToBinary - convert integer to binary.
 * @num: integer number to be converted.
 * Return: void.
 */
void convertToBinary(unsigned int num)
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
_putchar(binary[j] + '0');
}
}

