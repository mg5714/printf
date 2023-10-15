#include "main.h"

void convertToBinary(unsigned int num)
{
    int binary[32];
    int j, i = 0;
    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}
