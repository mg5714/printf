/**
 * convertToOctal - convert unsigned int to base 8
 * @num: number to be converted
 * @buffer: Pointer to the octal string buffer.
 * @buffer_index: Pointer to the buffer index.
 * @char_count: Pointer to the character count.
 * Return: length
 */
void convertToBinary(char *buffer, int *buffer_index, int *char_count, unsigned int num)
{
  unsigned int octal[32];
  int j, i = 0;

  while (num > 0)
  {
    octal[i] = num % 8;
    num /= 8;
    i++;
  }
  for (j = i - 1; j >= 0; j--)
  {
    my_putchar(octal[j] + '0');
    process_character(buffer, buffer_index, char_count, octal[j]);
  }
}
