#include "main.h"
/**
 * write_buffer - Writes the buffer to stdout and resets the buffer index
 * @buffer: Pointer to the buffer
 * @buffer_index: Pointer to the buffer index
 * @char_count: Pointer to the character count
 */
void write_buffer(char *buffer, int *buffer_index, int *char_count)
{
write(1, buffer, *buffer_index);
*buffer_index = 0;
*char_count += *buffer_index;
}

/**
 * process_character - Processes a character and updates the buffer and count
 * @buffer: Pointer to the buffer
 * @buffer_index: Pointer to the buffer index
 * @char_count: Pointer to the character count
 * @character: The character to process
 */
void process_character(char *buffer, int *buffer_index,
int *char_count, char character)
{
buffer[*buffer_index] = character;
(*buffer_index)++;
(*char_count)++;
if (*buffer_index == BUFF_SIZE)
write_buffer(buffer, buffer_index, char_count);
}

/**
* process_string - Processes a string and updates the buffer and count
* @buffer: Pointer to the buffer
* @buffer_index: Pointer to the buffer index
* @char_count: Pointer to the character count
* @str: The string to process
*/
void process_string(char *buffer, int *buffer_index,
int *char_count, char *str)
{
int i = 0;
while (str[i])
{
buffer[*buffer_index] = str[i];
(*buffer_index)++;
(*char_count)++;
i++;
if (*buffer_index == BUFF_SIZE)
write_buffer(buffer, buffer_index, char_count);
}
}
