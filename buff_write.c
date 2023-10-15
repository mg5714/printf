#include "main.h"
/**
 * Writes the buffer content to stdout.
 * Resets the buffer index to 0.
 */
void write_buffer(char *buffer, int *buffer_index)
{
write(1, buffer, *buffer_index);
*buffer_index = 0;
}
