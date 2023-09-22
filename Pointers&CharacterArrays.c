#include <stdio.h>
#include <string.h>
int main()
{
    char c[20];
    c[0] = 'S';
    c[1] = 'R';
    c[2] = 'I';
    c[3] = 'N';
    c[4] = 'J';
    c[5] = 'A';
    c[6] = 'Y';
    c[7] = '\0';
    // char pointer in c must be terminated using NULL charecter
    int l1 = strlen(c);
    printf("L1 = %d\n", l1);
    printf("c = %s\n", c);

    char x[15] = "Asia";
    int l2 = strlen(x);
    printf("L2 = %d\n", l2);
    printf("L2 = %s\n", x);

    return 0;
}