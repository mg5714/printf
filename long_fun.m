#include "main.h"

void printLong(int value)
{
printf("Long integer: %ld\n", (long) value);
}

void printUnsignedLong(unsigned int value)
{
printf("Unsigned long integer: %lu\n", (unsigned long) value);
}

void printOctalLong(unsigned int value)
{
printf("Octal representation (unsigned long): %lo\n",
(unsigned long) value);
}

void printHexLong(unsigned int value)
{
printf("Hexadecimal representation (unsigned long): %lx\n",
(unsigned long) value);
}

void printHexLongUppercase(unsigned int value)
{
printf("Hexadecimal representation (unsigned long - uppercase): %lX\n",
(unsigned long) value);
}
