#include <stdio.h>

int main()
{
    int a = 1025;
    int *p;
    p = &a;

    printf("Size of integer in bytes : %d \n", sizeof(int));
    printf("P:Address = %u, P:Value = %d\n", p, *p);
    printf("P+1:Address = %u, P+1:Value = %d\n", (p + 1), *(p + 1));

    char *p0;
    p0 = (char *)p; // Typecasting

    printf("Size of Character in bytes : %d \n", sizeof(char));
    printf("P0:Address = %u, p0:Value = %d\n", p0, *p0);
    printf("p0+1:Address = %u, p0:Value = %d\n", (p0 + 1), *(p0 + 1));
    //1025 = 00000000 00000000 00000100 00000001

    return 0;
}