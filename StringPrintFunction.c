#include <stdio.h>

void print(char *C)
{
    while (*C != '\0')
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main()
{
    char C[20] = "Hello";
    print(C);
    return 0;
}