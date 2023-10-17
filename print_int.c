/* #include "main.h" */

/* /\** */
/*  * print_int -Handles the d and i. */
/*  * @buffer: Pointer to the buffer */
/*  * @buffer_index: Pointer tobuffer index */
/*  * @char_count: Pointer to character count */
/*  * @args:va_list arguments */
/*  *\/ */
/* void print_int(char *buffer, int *buffer_index, int *char_count, va_list args) */
/* { */
/* int num = va_arg(args, int); */
/* int is_negative = 0; */
/* int i, start, end; */

/* if (num < 0) */
/* { */
/* is_negative = 1; */
/* num = -num; */
/* } */
/* i = *buffer_index; */
/* do */

/* { */
/* buffer[i++] = num % 10 + '0'; */
/* num /= 10; */
/* } while (num > 0); */
/* if (is_negative) */
/* { */
/* buffer[i++] = '-'; */
/* } */
/* start = *buffer_index; */
/* end = i - 1; */
/* while (start < end) */
/* { */
/* char temp = buffer[start]; */
/* buffer[start] = buffer[end]; */
/* buffer[end] = temp; */
/* start++; */
/* end--; */
/* } */
/* *buffer_index = i; */
/* *char_count += i - *buffer_index; */
/* } */
