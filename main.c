#include "main.h"
/*test main printf.c*/
int main()
{
    int count;
    count = _printf("Testing %% formatting\n");
    printf("Total characters printed: %d\n", count);
    
    count = _printf("Testing %c formatting\n", 'a');
    printf("Total characters printed: %d\n", count);
    
    char  *str = "Hello, World!";
    count = _printf("Testing %s formatting\n", str);
    printf("Total characters printed: %d\n", count);
    
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
