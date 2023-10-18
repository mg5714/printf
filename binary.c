#include "main.h"
/**
 * convertToBinary - convert integer to binary.
 * @num: integer number to be converted.
 * Return: void.
 */
void convertToBinary(unsigned int num)
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
char new = binary[j];
binary[j] = binary[i - j - 1];
binary[i - j - 1] = new;
}

for (j = i - 1; j >= 0; j--)
{
my_putchar(binary[j]);
}
free(binary);
}

