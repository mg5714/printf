#include "main.h"

void printShort(int value)
{
printf("Short integer: %hd\n", (short) value);
}

void printUnsignedShort(unsigned int value)
{
printf("Unsigned short integer: %hu\n", (unsigned short) value);
}

void printOctalShort(unsigned int value)
{
printf("Octal representation (unsigned short): %ho\n",
(unsigned short) value);
}

void printHexShort(unsigned int value)
{
printf("Hexadecimal representation (unsigned short): %hx\n",
(unsigned short) value);
}

void printHexShortUppercase(unsigned int value)
{
printf("Hexadecimal representation (unsigned short - uppercase): %hX\n",
(unsigned short) value);
}
