#include "main.h"
/**testing for printf*/
int main() {
    int printed_chars = _printf("Hello, %s! Today is %c.\n", "John", 'M');
    printf("Number of characters printed: %d\n", printed_chars);

    return 0;
}


/*test main bin.c*/
int main()
{
    unsigned int x = 8;
    printf("Binary representation of %b: ", num);
    printf("\n");
    convertToBinary(x);
    return (0);
}

/*test main p.c*/

int main()
{
    int num = 986;
    int *ptr = &num;
    printPointer(ptr);
    return (0);
}


/**testing for long_short*/
int main() {
    int value = 10;

    printLong(value);
    printShort(value);
    printUnsignedLong(value);
    printUnsignedShort(value);
    printOctalLong(value);
    printHexLong(value);
    printHexLongUppercase(value);
    printOctalShort(value);
    printHexShort(value);
    printHexShortUppercase(value);

    return (0);
}
