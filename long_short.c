#include "main.h"

void
printLong (int value)
{
  printf ("Long integer: %ld\n", (long) value);
}

void
printShort (int value)
{
  printf ("Short integer: %hd\n", (short) value);
}

void
printUnsignedLong (unsigned int value)
{
  printf ("Unsigned long integer: %lu\n", (unsigned long) value);
}

void
printUnsignedShort (unsigned int value)
{
  printf ("Unsigned short integer: %hu\n", (unsigned short) value);
}

void
printOctalLong (unsigned int value)
{
  printf ("Octal representation (unsigned long): %lo\n",
	  (unsigned long) value);
}

void
printHexLong (unsigned int value)
{
  printf ("Hexadecimal representation (unsigned long): %lx\n",
	  (unsigned long) value);
}

void
printHexLongUppercase (unsigned int value)
{
  printf ("Hexadecimal representation (unsigned long - uppercase): %lX\n",
	  (unsigned long) value);
}

void
printOctalShort (unsigned int value)
{
  printf ("Octal representation (unsigned short): %ho\n",
	  (unsigned short) value);
}

void
printHexShort (unsigned int value)
{
  printf ("Hexadecimal representation (unsigned short): %hx\n",
	  (unsigned short) value);
}

void
printHexShortUppercase (unsigned int value)
{
  printf ("Hexadecimal representation (unsigned short - uppercase): %hX\n",
	  (unsigned short) value);
}
