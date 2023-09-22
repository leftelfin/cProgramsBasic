#include <stdio.h>

int main()
{
    int a = 10, *p;
    p = &a;
    printf("Address of p : %u .\n", p);
    printf("Value at address p : %d .\n", *p);
    printf("Size of Integer in bytes : %d .\n", sizeof(int));
    printf("Address of p+1 is : %u .\n", p + 1);
    printf("Value at p+1 is : %d .\n", *(p + 1));
    return 0;
}