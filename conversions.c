/**
 * convertToOctal - convert unsigned int to base 8
 * @num: number to be converted
 * Return: length
 */
void convertToOctal(unsigned int num)
{
  char octal[32];
  int i = 0;
  while (num > 0)
  {
    octal[i] = num % 8;
    num /= 8;
    i++;
  }
  for (int j = i - 1; j >= 0; j--)
  {
    printf("%d", octal[j]);
  }
}

/**
 * convertToHex - convert number to base 16
 * @case: checks lower or upper
 * @num: number to be converted
 * Return: number of printed chars
 */
/*void convertToHex(unsigned int num, char case)
{
  char hex_table[32] = "0123456789ABCDEF";
  char hex[32];
  int i = 0;
  while (num > 0)
  {
    int remainder = num % 16;
    if (case == 'U')
    {
      hex[i] = hex_table[remainder];
    }
    else
    {
      hex[i] = tolower(hex_table[remainder]);
    }
    num /= 16;
    i++;
  }
  for (int j = i - 1; j >= 0; j--)
  {
    printf("%c", hex[j]);
  }
}*/
